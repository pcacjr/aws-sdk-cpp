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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/ChannelType.h>
#include <aws/pinpoint/model/EndpointDemographic.h>
#include <aws/pinpoint/model/EndpointLocation.h>
#include <aws/pinpoint/model/EndpointUser.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * Endpoint update request
   */
  class AWS_PINPOINT_API EndpointRequest
  {
  public:
    EndpointRequest();
    EndpointRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    EndpointRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The address or token of the endpoint as provided by your push provider (e.g.
     * DeviceToken or RegistrationId).
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * The address or token of the endpoint as provided by your push provider (e.g.
     * DeviceToken or RegistrationId).
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * The address or token of the endpoint as provided by your push provider (e.g.
     * DeviceToken or RegistrationId).
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * The address or token of the endpoint as provided by your push provider (e.g.
     * DeviceToken or RegistrationId).
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * The address or token of the endpoint as provided by your push provider (e.g.
     * DeviceToken or RegistrationId).
     */
    inline EndpointRequest& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * The address or token of the endpoint as provided by your push provider (e.g.
     * DeviceToken or RegistrationId).
     */
    inline EndpointRequest& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * The address or token of the endpoint as provided by your push provider (e.g.
     * DeviceToken or RegistrationId).
     */
    inline EndpointRequest& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create a segment.
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAttributes() const{ return m_attributes; }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create a segment.
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create a segment.
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create a segment.
     */
    inline EndpointRequest& WithAttributes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetAttributes(value); return *this;}

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create a segment.
     */
    inline EndpointRequest& WithAttributes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create a segment.
     */
    inline EndpointRequest& AddAttributes(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create a segment.
     */
    inline EndpointRequest& AddAttributes(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create a segment.
     */
    inline EndpointRequest& AddAttributes(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create a segment.
     */
    inline EndpointRequest& AddAttributes(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create a segment.
     */
    inline EndpointRequest& AddAttributes(const char* key, Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create a segment.
     */
    inline EndpointRequest& AddAttributes(const char* key, const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * The channel type.

Valid values: GCM | APNS | SMS | EMAIL
     */
    inline const ChannelType& GetChannelType() const{ return m_channelType; }

    /**
     * The channel type.

Valid values: GCM | APNS | SMS | EMAIL
     */
    inline void SetChannelType(const ChannelType& value) { m_channelTypeHasBeenSet = true; m_channelType = value; }

    /**
     * The channel type.

Valid values: GCM | APNS | SMS | EMAIL
     */
    inline void SetChannelType(ChannelType&& value) { m_channelTypeHasBeenSet = true; m_channelType = std::move(value); }

    /**
     * The channel type.

Valid values: GCM | APNS | SMS | EMAIL
     */
    inline EndpointRequest& WithChannelType(const ChannelType& value) { SetChannelType(value); return *this;}

    /**
     * The channel type.

Valid values: GCM | APNS | SMS | EMAIL
     */
    inline EndpointRequest& WithChannelType(ChannelType&& value) { SetChannelType(std::move(value)); return *this;}


    /**
     * The endpoint demographic attributes.
     */
    inline const EndpointDemographic& GetDemographic() const{ return m_demographic; }

    /**
     * The endpoint demographic attributes.
     */
    inline void SetDemographic(const EndpointDemographic& value) { m_demographicHasBeenSet = true; m_demographic = value; }

    /**
     * The endpoint demographic attributes.
     */
    inline void SetDemographic(EndpointDemographic&& value) { m_demographicHasBeenSet = true; m_demographic = std::move(value); }

    /**
     * The endpoint demographic attributes.
     */
    inline EndpointRequest& WithDemographic(const EndpointDemographic& value) { SetDemographic(value); return *this;}

    /**
     * The endpoint demographic attributes.
     */
    inline EndpointRequest& WithDemographic(EndpointDemographic&& value) { SetDemographic(std::move(value)); return *this;}


    /**
     * The last time the endpoint was updated. Provided in ISO 8601 format.
     */
    inline const Aws::String& GetEffectiveDate() const{ return m_effectiveDate; }

    /**
     * The last time the endpoint was updated. Provided in ISO 8601 format.
     */
    inline void SetEffectiveDate(const Aws::String& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = value; }

    /**
     * The last time the endpoint was updated. Provided in ISO 8601 format.
     */
    inline void SetEffectiveDate(Aws::String&& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = std::move(value); }

    /**
     * The last time the endpoint was updated. Provided in ISO 8601 format.
     */
    inline void SetEffectiveDate(const char* value) { m_effectiveDateHasBeenSet = true; m_effectiveDate.assign(value); }

    /**
     * The last time the endpoint was updated. Provided in ISO 8601 format.
     */
    inline EndpointRequest& WithEffectiveDate(const Aws::String& value) { SetEffectiveDate(value); return *this;}

    /**
     * The last time the endpoint was updated. Provided in ISO 8601 format.
     */
    inline EndpointRequest& WithEffectiveDate(Aws::String&& value) { SetEffectiveDate(std::move(value)); return *this;}

    /**
     * The last time the endpoint was updated. Provided in ISO 8601 format.
     */
    inline EndpointRequest& WithEffectiveDate(const char* value) { SetEffectiveDate(value); return *this;}


    /**
     * The endpoint status. Can be either ACTIVE or INACTIVE. Will be set to INACTIVE
     * if a delivery fails. Will be set to ACTIVE if the address is updated.
     */
    inline const Aws::String& GetEndpointStatus() const{ return m_endpointStatus; }

    /**
     * The endpoint status. Can be either ACTIVE or INACTIVE. Will be set to INACTIVE
     * if a delivery fails. Will be set to ACTIVE if the address is updated.
     */
    inline void SetEndpointStatus(const Aws::String& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }

    /**
     * The endpoint status. Can be either ACTIVE or INACTIVE. Will be set to INACTIVE
     * if a delivery fails. Will be set to ACTIVE if the address is updated.
     */
    inline void SetEndpointStatus(Aws::String&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::move(value); }

    /**
     * The endpoint status. Can be either ACTIVE or INACTIVE. Will be set to INACTIVE
     * if a delivery fails. Will be set to ACTIVE if the address is updated.
     */
    inline void SetEndpointStatus(const char* value) { m_endpointStatusHasBeenSet = true; m_endpointStatus.assign(value); }

    /**
     * The endpoint status. Can be either ACTIVE or INACTIVE. Will be set to INACTIVE
     * if a delivery fails. Will be set to ACTIVE if the address is updated.
     */
    inline EndpointRequest& WithEndpointStatus(const Aws::String& value) { SetEndpointStatus(value); return *this;}

    /**
     * The endpoint status. Can be either ACTIVE or INACTIVE. Will be set to INACTIVE
     * if a delivery fails. Will be set to ACTIVE if the address is updated.
     */
    inline EndpointRequest& WithEndpointStatus(Aws::String&& value) { SetEndpointStatus(std::move(value)); return *this;}

    /**
     * The endpoint status. Can be either ACTIVE or INACTIVE. Will be set to INACTIVE
     * if a delivery fails. Will be set to ACTIVE if the address is updated.
     */
    inline EndpointRequest& WithEndpointStatus(const char* value) { SetEndpointStatus(value); return *this;}


    /**
     * The endpoint location attributes.
     */
    inline const EndpointLocation& GetLocation() const{ return m_location; }

    /**
     * The endpoint location attributes.
     */
    inline void SetLocation(const EndpointLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * The endpoint location attributes.
     */
    inline void SetLocation(EndpointLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * The endpoint location attributes.
     */
    inline EndpointRequest& WithLocation(const EndpointLocation& value) { SetLocation(value); return *this;}

    /**
     * The endpoint location attributes.
     */
    inline EndpointRequest& WithLocation(EndpointLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline const Aws::Map<Aws::String, double>& GetMetrics() const{ return m_metrics; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline void SetMetrics(const Aws::Map<Aws::String, double>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline void SetMetrics(Aws::Map<Aws::String, double>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline EndpointRequest& WithMetrics(const Aws::Map<Aws::String, double>& value) { SetMetrics(value); return *this;}

    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline EndpointRequest& WithMetrics(Aws::Map<Aws::String, double>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline EndpointRequest& AddMetrics(const Aws::String& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline EndpointRequest& AddMetrics(Aws::String&& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint.
     */
    inline EndpointRequest& AddMetrics(const char* key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }


    /**
     * Indicates whether a user has opted out of receiving messages with one of the
     * following values:

ALL - User has opted out of all messages.

NONE - Users has
     * not opted out and receives all messages.
     */
    inline const Aws::String& GetOptOut() const{ return m_optOut; }

    /**
     * Indicates whether a user has opted out of receiving messages with one of the
     * following values:

ALL - User has opted out of all messages.

NONE - Users has
     * not opted out and receives all messages.
     */
    inline void SetOptOut(const Aws::String& value) { m_optOutHasBeenSet = true; m_optOut = value; }

    /**
     * Indicates whether a user has opted out of receiving messages with one of the
     * following values:

ALL - User has opted out of all messages.

NONE - Users has
     * not opted out and receives all messages.
     */
    inline void SetOptOut(Aws::String&& value) { m_optOutHasBeenSet = true; m_optOut = std::move(value); }

    /**
     * Indicates whether a user has opted out of receiving messages with one of the
     * following values:

ALL - User has opted out of all messages.

NONE - Users has
     * not opted out and receives all messages.
     */
    inline void SetOptOut(const char* value) { m_optOutHasBeenSet = true; m_optOut.assign(value); }

    /**
     * Indicates whether a user has opted out of receiving messages with one of the
     * following values:

ALL - User has opted out of all messages.

NONE - Users has
     * not opted out and receives all messages.
     */
    inline EndpointRequest& WithOptOut(const Aws::String& value) { SetOptOut(value); return *this;}

    /**
     * Indicates whether a user has opted out of receiving messages with one of the
     * following values:

ALL - User has opted out of all messages.

NONE - Users has
     * not opted out and receives all messages.
     */
    inline EndpointRequest& WithOptOut(Aws::String&& value) { SetOptOut(std::move(value)); return *this;}

    /**
     * Indicates whether a user has opted out of receiving messages with one of the
     * following values:

ALL - User has opted out of all messages.

NONE - Users has
     * not opted out and receives all messages.
     */
    inline EndpointRequest& WithOptOut(const char* value) { SetOptOut(value); return *this;}


    /**
     * The unique ID for the most recent request to update the endpoint.
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * The unique ID for the most recent request to update the endpoint.
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * The unique ID for the most recent request to update the endpoint.
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * The unique ID for the most recent request to update the endpoint.
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * The unique ID for the most recent request to update the endpoint.
     */
    inline EndpointRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * The unique ID for the most recent request to update the endpoint.
     */
    inline EndpointRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * The unique ID for the most recent request to update the endpoint.
     */
    inline EndpointRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * Custom user-specific attributes that your app reports to Amazon Pinpoint.
     */
    inline const EndpointUser& GetUser() const{ return m_user; }

    /**
     * Custom user-specific attributes that your app reports to Amazon Pinpoint.
     */
    inline void SetUser(const EndpointUser& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * Custom user-specific attributes that your app reports to Amazon Pinpoint.
     */
    inline void SetUser(EndpointUser&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * Custom user-specific attributes that your app reports to Amazon Pinpoint.
     */
    inline EndpointRequest& WithUser(const EndpointUser& value) { SetUser(value); return *this;}

    /**
     * Custom user-specific attributes that your app reports to Amazon Pinpoint.
     */
    inline EndpointRequest& WithUser(EndpointUser&& value) { SetUser(std::move(value)); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_attributes;
    bool m_attributesHasBeenSet;

    ChannelType m_channelType;
    bool m_channelTypeHasBeenSet;

    EndpointDemographic m_demographic;
    bool m_demographicHasBeenSet;

    Aws::String m_effectiveDate;
    bool m_effectiveDateHasBeenSet;

    Aws::String m_endpointStatus;
    bool m_endpointStatusHasBeenSet;

    EndpointLocation m_location;
    bool m_locationHasBeenSet;

    Aws::Map<Aws::String, double> m_metrics;
    bool m_metricsHasBeenSet;

    Aws::String m_optOut;
    bool m_optOutHasBeenSet;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet;

    EndpointUser m_user;
    bool m_userHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
