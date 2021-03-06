// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @file PublisherListener.h	
 */

#ifndef PUBLISHERLISTENER_H_
#define PUBLISHERLISTENER_H_

#include "../rtps/common/Types.h"
#include "../rtps/common/MatchingInfo.h"



namespace eprosima {
namespace fastrtps {

class Publisher;

/**
 * Class PublisherListener, allows the end user to implement callbacks triggered by certain events.
 * @ingroup FASTRTPS_MODULE
 * @snippet fastrtps_example.cpp ex_PublisherListener
 */
class RTPS_DllAPI PublisherListener
{
public:
	PublisherListener(){};
	virtual ~PublisherListener(){};
	/**
	 * This method is called when the Publisher is matched (or unmatched) against an endpoint.
	 * @param pub Pointer to the associated Publisher
	 * @param info Information regarding the matched subscriber
	 */
	virtual void onPublicationMatched(Publisher* pub, rtps::MatchingInfo& info){(void)pub; (void)info;};
};

} /* namespace rtps */
} /* namespace eprosima */

#endif /* PUBLISHERLISTENER_H_ */
