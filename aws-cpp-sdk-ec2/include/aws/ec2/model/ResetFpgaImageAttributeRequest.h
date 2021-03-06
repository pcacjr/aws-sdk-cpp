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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResetFpgaImageAttributeName.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API ResetFpgaImageAttributeRequest : public EC2Request
  {
  public:
    ResetFpgaImageAttributeRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() override { return "ResetFpgaImageAttribute"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ResetFpgaImageAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the AFI.</p>
     */
    inline const Aws::String& GetFpgaImageId() const{ return m_fpgaImageId; }

    /**
     * <p>The ID of the AFI.</p>
     */
    inline void SetFpgaImageId(const Aws::String& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = value; }

    /**
     * <p>The ID of the AFI.</p>
     */
    inline void SetFpgaImageId(Aws::String&& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = std::move(value); }

    /**
     * <p>The ID of the AFI.</p>
     */
    inline void SetFpgaImageId(const char* value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId.assign(value); }

    /**
     * <p>The ID of the AFI.</p>
     */
    inline ResetFpgaImageAttributeRequest& WithFpgaImageId(const Aws::String& value) { SetFpgaImageId(value); return *this;}

    /**
     * <p>The ID of the AFI.</p>
     */
    inline ResetFpgaImageAttributeRequest& WithFpgaImageId(Aws::String&& value) { SetFpgaImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AFI.</p>
     */
    inline ResetFpgaImageAttributeRequest& WithFpgaImageId(const char* value) { SetFpgaImageId(value); return *this;}


    /**
     * <p>The attribute.</p>
     */
    inline const ResetFpgaImageAttributeName& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The attribute.</p>
     */
    inline void SetAttribute(const ResetFpgaImageAttributeName& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The attribute.</p>
     */
    inline void SetAttribute(ResetFpgaImageAttributeName&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The attribute.</p>
     */
    inline ResetFpgaImageAttributeRequest& WithAttribute(const ResetFpgaImageAttributeName& value) { SetAttribute(value); return *this;}

    /**
     * <p>The attribute.</p>
     */
    inline ResetFpgaImageAttributeRequest& WithAttribute(ResetFpgaImageAttributeName&& value) { SetAttribute(std::move(value)); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_fpgaImageId;
    bool m_fpgaImageIdHasBeenSet;

    ResetFpgaImageAttributeName m_attribute;
    bool m_attributeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
