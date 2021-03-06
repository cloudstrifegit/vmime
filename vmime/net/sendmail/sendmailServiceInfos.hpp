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

#ifndef VMIME_NET_SENDMAIL_SENDMAILSERVICEINFOS_HPP_INCLUDED
#define VMIME_NET_SENDMAIL_SENDMAILSERVICEINFOS_HPP_INCLUDED


#include "vmime/config.hpp"
#include "vmime/net/serviceInfos.hpp"


#if VMIME_BUILTIN_PLATFORM_POSIX


namespace vmime {
namespace net {
namespace sendmail {


/** Information about sendmail service.
  */

class sendmailServiceInfos : public serviceInfos
{
public:

	sendmailServiceInfos();

	struct props
	{
		serviceInfos::property PROPERTY_BINPATH;
	};

	const props& getProperties() const;

	const string getPropertyPrefix() const;
	const std::vector <serviceInfos::property> getAvailableProperties() const;
};


} // sendmail
} // net
} // vmime


#endif // VMIME_BUILTIN_PLATFORM_POSIX


#endif // VMIME_NET_SENDMAIL_SENDMAILSERVICEINFOS_HPP_INCLUDED

