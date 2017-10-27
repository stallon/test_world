///////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) Crossbar.io Technologies GmbH and contributors
//
// Boost Software License - Version 1.0 - August 17th, 2003
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
//
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef AUTOBAHN_HPP
#define AUTOBAHN_HPP

#ifdef _WIN32
#define MSGPACK_DISABLE_LEGACY_CONVERT
#define MSGPACK_DEFAULT_API_VERSION 1
#define MSGPACK_DISABLE_LEGACY_CONVERT
#endif

#include "wamp_event.hpp"
#include "wamp_invocation.hpp"
#include "wamp_session.hpp"
#include "wamp_tcp_transport.hpp"
#include "wamp_transport.hpp"
#ifdef BOOST_ASIO_HAS_LOCAL_SOCKETS
#include "wamp_uds_transport.hpp"
#endif

/*! \mainpage Autobahn-C++ Documentation

Welcome to the [Autobahn-C++](https://github.com/crossbario/autobahn-cpp) documentation.
\n\n

Autobahn-C++ is a client library for the [WAMP protocol](http://wamp-proto.org/) that
allows developers to create WAMP application components in C++.

Application components connect to a WAMP router like [Crossbar.io](http://crossbar.io)
which acts as a messaging layer that allows seamless, secure and cross-language
communication with other components.

With Autobahn-C++, application components can be (optionally) compiled and linked into
small (<2MB), single file executables for a specific CPU architecture, and then run
on all Linux distributions of that architecture.

This comes with a number of deployment, resource efficiency and other advantages.
\n\n

We provide the documentation here, full working examples and Docker Autobahn-C++ images with
complete pre-integrated toolchains:

- **[Examples](https://github.com/crossbario/autobahn-cpp/tree/master/examples)**
- **[Docker toolchain images](https://hub.docker.com/r/crossbario/autobahn-cpp/)**

This should you get started from working code examples that you can gradually modify
to your needs. All example code is MIT licensed, so you can safely use it in any software
developement context.

If you have questions, you can reach out at:

- [Mailing list](https://groups.google.com/forum/#!forum/autobahnws)
- IRC #autobahn on Freenode

If you found a bug in the documentation or have a correction, improvement or addition you
would like see merged, awesome!
Please submit an issue or submit a PR directly to the
Autobahn-C++ source repository
[here](https://github.com/crossbario/autobahn-cpp), as all the HTML documentation is built from
comments in the code using Doxygen.
\n\n

However, if you have a question, please use the mailing list or IRC as mentioned above
rather than misusing the issue tracker;)
*/

#endif // AUTOBAHN_HPP