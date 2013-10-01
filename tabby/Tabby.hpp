/*
	Copyright (c) 2013 Christopher A. Taylor.  All rights reserved.

	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions are met:

	* Redistributions of source code must retain the above copyright notice,
	  this list of conditions and the following disclaimer.
	* Redistributions in binary form must reproduce the above copyright notice,
	  this list of conditions and the following disclaimer in the documentation
	  and/or other materials provided with the distribution.
	* Neither the name of Tabby nor the names of its contributors may be
	  used to endorse or promote products derived from this software without
	  specific prior written permission.

	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
	AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
	IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
	ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
	LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
	CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
	SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
	INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
	CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
	ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
	POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef CAT_TABBY_HPP
#define CAT_TABBY_HPP

#include "Platform.hpp"

namespace cat {

namespace tabby {


struct PublicKey {
	u8 data[64];		// Public point affine (x,y)
};

struct Hello {
	u8 data[64 + 32];	// Client public point affine (x,y) + random number
};


//// Server

class Server {
	PublicKey _public_key;
	cymric::Generator _generator;

public:
	Server() {
	}
	virtual ~Server() {
	}
};


//// Client

class Client {
	PublicKey _server_public_key;
	PrivateKey _private_key;
	cymric::Generator _generator;

public:
	Client() {
	}
	virtual ~Client() {
	}

	void Initialize(PublicKey &server_public_key) {
		_server_public_key = server_public_key;

		_generator.Initialize();

		_generator.Generate(
	}

	void FillHello(Hello *hello) {
		hello->data;
	}
};


} // namespace tabby

} // namespace cat

#endif // CAT_TABBY_HPP


