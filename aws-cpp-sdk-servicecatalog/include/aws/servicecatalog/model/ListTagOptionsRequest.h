﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/servicecatalog/model/ListTagOptionsFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API ListTagOptionsRequest : public ServiceCatalogRequest
  {
  public:
    ListTagOptionsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() override { return "ListTagOptions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The list of filters with which to limit search results. If no search filters
     * are specified, the output is all TagOptions. </p>
     */
    inline const ListTagOptionsFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>The list of filters with which to limit search results. If no search filters
     * are specified, the output is all TagOptions. </p>
     */
    inline void SetFilters(const ListTagOptionsFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The list of filters with which to limit search results. If no search filters
     * are specified, the output is all TagOptions. </p>
     */
    inline void SetFilters(ListTagOptionsFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The list of filters with which to limit search results. If no search filters
     * are specified, the output is all TagOptions. </p>
     */
    inline ListTagOptionsRequest& WithFilters(const ListTagOptionsFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>The list of filters with which to limit search results. If no search filters
     * are specified, the output is all TagOptions. </p>
     */
    inline ListTagOptionsRequest& WithFilters(ListTagOptionsFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The maximum number of items to return in the results. If more results exist
     * than fit in the specified <code>PageSize</code>, the value of
     * <code>NextPageToken</code> in the response is non-null.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of items to return in the results. If more results exist
     * than fit in the specified <code>PageSize</code>, the value of
     * <code>NextPageToken</code> in the response is non-null.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of items to return in the results. If more results exist
     * than fit in the specified <code>PageSize</code>, the value of
     * <code>NextPageToken</code> in the response is non-null.</p>
     */
    inline ListTagOptionsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p>The page token of the first page retrieved. If null, this retrieves the first
     * page of size <code>PageSize</code>.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }

    /**
     * <p>The page token of the first page retrieved. If null, this retrieves the first
     * page of size <code>PageSize</code>.</p>
     */
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p>The page token of the first page retrieved. If null, this retrieves the first
     * page of size <code>PageSize</code>.</p>
     */
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::move(value); }

    /**
     * <p>The page token of the first page retrieved. If null, this retrieves the first
     * page of size <code>PageSize</code>.</p>
     */
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }

    /**
     * <p>The page token of the first page retrieved. If null, this retrieves the first
     * page of size <code>PageSize</code>.</p>
     */
    inline ListTagOptionsRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p>The page token of the first page retrieved. If null, this retrieves the first
     * page of size <code>PageSize</code>.</p>
     */
    inline ListTagOptionsRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token of the first page retrieved. If null, this retrieves the first
     * page of size <code>PageSize</code>.</p>
     */
    inline ListTagOptionsRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}

  private:

    ListTagOptionsFilters m_filters;
    bool m_filtersHasBeenSet;

    int m_pageSize;
    bool m_pageSizeHasBeenSet;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
