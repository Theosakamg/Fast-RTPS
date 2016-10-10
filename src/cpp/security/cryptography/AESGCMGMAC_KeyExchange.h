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

/*!
 * @file AESGCMGMAC_KeyExchange.h
 */

#ifndef _SECURITY_AUTHENTICATION_AESGCMGMAC_KEYEXCHANGE_H_
#define _SECURITY_AUTHENTICATION_AESGCMGMAC_KEYEXCHANGE_H_

#include <fastrtps/rtps/security/cryptography/CryptoKeyExchange.h>
#include <fastrtps/rtps/attributes/PropertyPolicy.h>

namespace eprosima {
namespace fastrtps {
namespace rtps {
namespace security {

class AESGCMGMAC_KeyExchange : public CryptoKeyExchange
{
    public:

    AESGCMGMAC_KeyExchange();


    bool create_local_participant_crypto_tokens(
            ParticipantCryptoTokenSeq &local_participant_crypto_tokens,
            const ParticipantCryptoHandle &local_participant_crypto,
            const ParticipantCryptoHandle &remote_participant_crypto,
            SecurityException &exception);
     
    bool set_remote_participant_crypto_tokens(
            const ParticipantCryptoHandle &local_participant_crypto,
            const ParticipantCryptoHandle &remote_participant_crypto,
            const ParticipantCryptoTokenSeq &remote_participant_tokens,
            SecurityException &exception);

    bool create_local_datawriter_crypto_tokens(
            DatawriterCryptoTokenSeq &local_datawriter_crypto_tokens,
            const DatawriterCryptoHandle &local_datawriter_crypto,
            const DatareaderCryptoHandle &remote_datareader_crypto,
            SecurityException &exception);

    bool create_local_datareader_crypto_tokens(
            DatareaderCryptoTokenSeq &local_datareader_crypto_tokens,
            const DatareaderCryptoHandle &local_datareader_crypto,
            const DatawriterCryptoHandle &remote_datawriter_crypto,
            SecurityException &exception);

    bool set_remote_datareader_crypto_tokens(
            const DatawriterCryptoHandle &local_datawriter_crypto,
            const DatareaderCryptoHandle &remote_datareader_crypto,
            const DatareaderCryptoTokenSeq &remote_datareader_tokens,
            SecurityException &exception);

    bool return_crypto_tokens(
            const CryptoTokenSeq &crypto_tokens,
            SecurityException *exception);

};

} //namespace security
} //namespace rtps
} //namespace fastrtps
} //namespace eprosima

#endif // _SECURITY_AUTHENTICATION_AESGCMGMAC_KEYEXCHANGE_H_