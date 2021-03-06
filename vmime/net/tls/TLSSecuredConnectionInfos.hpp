//
// VMime library (http://www.vmime.org)
// Copyright (C) 2002-2009 Vincent Richard <vincent@vincent-richard.net>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 3 of
// the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
// Linking this library statically or dynamically with other modules is making
// a combined work based on this library.  Thus, the terms and conditions of
// the GNU General Public License cover the whole combination.
//

#ifndef VMIME_NET_TLSSECUREDCONNECTIONINFOS_HPP_INCLUDED
#define VMIME_NET_TLSSECUREDCONNECTIONINFOS_HPP_INCLUDED


#include "vmime/net/securedConnectionInfos.hpp"

#include "vmime/security/cert/certificateChain.hpp"


namespace vmime {
namespace net {
namespace tls {


class TLSSession;
class TLSSocket;


/** Information about a TLS-secured connection used by a service.
  */
class TLSSecuredConnectionInfos : public securedConnectionInfos
{
public:

	TLSSecuredConnectionInfos(const string& host, const port_t port,
		ref <TLSSession> tlsSession, ref <TLSSocket> tlsSocket);

	const string getHost() const;
	port_t getPort() const;

	/** Return the peer's certificate (chain) as sent by the peer.
	  *
	  * @return server certificate chain
	  */
	ref <const security::cert::certificateChain> getPeerCertificates() const;

private:

	string m_host;
	port_t m_port;

	ref <TLSSession> m_tlsSession;
	ref <TLSSocket> m_tlsSocket;
};


} // tls
} // net
} // vmime


#endif // VMIME_NET_TLSSECUREDCONNECTIONINFOS_HPP_INCLUDED

