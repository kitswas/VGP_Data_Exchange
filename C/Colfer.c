// Code generated by colf(1); DO NOT EDIT.
// The compiler used schema file demo.colf and GamePadReading.colf for package VGP_Data_Exchange.

#include "Colfer.h"
#include <errno.h>
#include <stdlib.h>

#if defined(__BYTE_ORDER) && __BYTE_ORDER == __BIG_ENDIAN || \
    defined(__BIG_ENDIAN__) || \
    defined(__ARMEB__) || \
    defined(__AARCH64EB__) || \
    defined(_MIPSEB) || defined(__MIPSEB) || defined(__MIPSEB__) || \
    defined(__SYSC_ZARCH__)
#define COLFER_ENDIAN
#endif


size_t colfer_size_max = 16 * 1024 * 1024;
size_t colfer_list_max = 64 * 1024;



size_t vgp_data_exchange_gamepad_reading_marshal_len(const vgp_data_exchange_gamepad_reading* o) {
	size_t l = 1;

	{
		uint_fast32_t x = o->buttons_up;
		if (x) {
			if (x >= (uint_fast32_t) 1 << 21) l += 5;
			else for (l += 2; x > 127; x >>= 7, ++l);
		}
	}

	{
		uint_fast32_t x = o->buttons_down;
		if (x) {
			if (x >= (uint_fast32_t) 1 << 21) l += 5;
			else for (l += 2; x > 127; x >>= 7, ++l);
		}
	}

	if (o->left_trigger != 0.0f) l += 5;

	if (o->right_trigger != 0.0f) l += 5;

	if (o->left_thumbstick_x != 0.0f) l += 5;

	if (o->left_thumbstick_y != 0.0f) l += 5;

	if (o->right_thumbstick_x != 0.0f) l += 5;

	if (o->right_thumbstick_y != 0.0f) l += 5;

	if (l > colfer_size_max) {
		errno = EFBIG;
		return 0;
	}
	return l;
}

size_t vgp_data_exchange_gamepad_reading_marshal(const vgp_data_exchange_gamepad_reading* o, void* buf) {
	// octet pointer navigation
	uint8_t* p = buf;

	{
		uint_fast32_t x = o->buttons_up;
		if (x) {
			if (x < (uint_fast32_t) 1 << 21) {
				*p++ = 0;
				for (; x >= 128; x >>= 7) *p++ = x | 128;
				*p++ = x;
			} else {
				*p++ = 0 | 128;
#ifdef COLFER_ENDIAN
				memcpy(p, &o->buttons_up, 4);
				p += 4;
#else
				*p++ = x >> 24;
				*p++ = x >> 16;
				*p++ = x >> 8;
				*p++ = x;
#endif
			}
		}
	}

	{
		uint_fast32_t x = o->buttons_down;
		if (x) {
			if (x < (uint_fast32_t) 1 << 21) {
				*p++ = 1;
				for (; x >= 128; x >>= 7) *p++ = x | 128;
				*p++ = x;
			} else {
				*p++ = 1 | 128;
#ifdef COLFER_ENDIAN
				memcpy(p, &o->buttons_down, 4);
				p += 4;
#else
				*p++ = x >> 24;
				*p++ = x >> 16;
				*p++ = x >> 8;
				*p++ = x;
#endif
			}
		}
	}

	if (o->left_trigger != 0.0f) {
		*p++ = 2;

#ifdef COLFER_ENDIAN
		memcpy(p, &o->left_trigger, 4);
		p += 4;
#else
		uint_fast32_t x;
		memcpy(&x, &o->left_trigger, 4);
		*p++ = x >> 24;
		*p++ = x >> 16;
		*p++ = x >> 8;
		*p++ = x;
#endif
	}

	if (o->right_trigger != 0.0f) {
		*p++ = 3;

#ifdef COLFER_ENDIAN
		memcpy(p, &o->right_trigger, 4);
		p += 4;
#else
		uint_fast32_t x;
		memcpy(&x, &o->right_trigger, 4);
		*p++ = x >> 24;
		*p++ = x >> 16;
		*p++ = x >> 8;
		*p++ = x;
#endif
	}

	if (o->left_thumbstick_x != 0.0f) {
		*p++ = 4;

#ifdef COLFER_ENDIAN
		memcpy(p, &o->left_thumbstick_x, 4);
		p += 4;
#else
		uint_fast32_t x;
		memcpy(&x, &o->left_thumbstick_x, 4);
		*p++ = x >> 24;
		*p++ = x >> 16;
		*p++ = x >> 8;
		*p++ = x;
#endif
	}

	if (o->left_thumbstick_y != 0.0f) {
		*p++ = 5;

#ifdef COLFER_ENDIAN
		memcpy(p, &o->left_thumbstick_y, 4);
		p += 4;
#else
		uint_fast32_t x;
		memcpy(&x, &o->left_thumbstick_y, 4);
		*p++ = x >> 24;
		*p++ = x >> 16;
		*p++ = x >> 8;
		*p++ = x;
#endif
	}

	if (o->right_thumbstick_x != 0.0f) {
		*p++ = 6;

#ifdef COLFER_ENDIAN
		memcpy(p, &o->right_thumbstick_x, 4);
		p += 4;
#else
		uint_fast32_t x;
		memcpy(&x, &o->right_thumbstick_x, 4);
		*p++ = x >> 24;
		*p++ = x >> 16;
		*p++ = x >> 8;
		*p++ = x;
#endif
	}

	if (o->right_thumbstick_y != 0.0f) {
		*p++ = 7;

#ifdef COLFER_ENDIAN
		memcpy(p, &o->right_thumbstick_y, 4);
		p += 4;
#else
		uint_fast32_t x;
		memcpy(&x, &o->right_thumbstick_y, 4);
		*p++ = x >> 24;
		*p++ = x >> 16;
		*p++ = x >> 8;
		*p++ = x;
#endif
	}

	*p++ = 127;

	return p - (uint8_t*) buf;
}

size_t vgp_data_exchange_gamepad_reading_unmarshal(vgp_data_exchange_gamepad_reading* o, const void* data, size_t datalen) {
	// octet pointer navigation
	const uint8_t* p = data;
	const uint8_t* end;
	int enderr;
	if (datalen < colfer_size_max) {
		end = p + datalen;
		enderr = EWOULDBLOCK;
	} else {
		end = p + colfer_size_max;
		enderr = EFBIG;
	}

	if (p >= end) {
		errno = enderr;
		return 0;
	}
	uint_fast8_t header = *p++;

	if (header == 0) {
		if (p+1 >= end) {
			errno = enderr;
			return 0;
		}
		uint_fast32_t x = *p++;
		if (x > 127) {
			x &= 127;
			for (int shift = 7; ; shift += 7) {
				uint_fast32_t b = *p++;
				if (p >= end) {
					errno = enderr;
					return 0;
				}
				if (b <= 127) {
					x |= b << shift;
					break;
				}
				x |= (b & 127) << shift;
			}
		}
		o->buttons_up = x;
		header = *p++;
	} else if (header == (0 | 128)) {
		if (p+4 >= end) {
			errno = enderr;
			return 0;
		}
		uint_fast32_t x = *p++;
		x <<= 24;
		x |= (uint_fast32_t) *p++ << 16;
		x |= (uint_fast32_t) *p++ << 8;
		x |= (uint_fast32_t) *p++;
		o->buttons_up = x;
		header = *p++;
	}

	if (header == 1) {
		if (p+1 >= end) {
			errno = enderr;
			return 0;
		}
		uint_fast32_t x = *p++;
		if (x > 127) {
			x &= 127;
			for (int shift = 7; ; shift += 7) {
				uint_fast32_t b = *p++;
				if (p >= end) {
					errno = enderr;
					return 0;
				}
				if (b <= 127) {
					x |= b << shift;
					break;
				}
				x |= (b & 127) << shift;
			}
		}
		o->buttons_down = x;
		header = *p++;
	} else if (header == (1 | 128)) {
		if (p+4 >= end) {
			errno = enderr;
			return 0;
		}
		uint_fast32_t x = *p++;
		x <<= 24;
		x |= (uint_fast32_t) *p++ << 16;
		x |= (uint_fast32_t) *p++ << 8;
		x |= (uint_fast32_t) *p++;
		o->buttons_down = x;
		header = *p++;
	}

	if (header == 2) {
		if (p+4 >= end) {
			errno = enderr;
			return 0;
		}
#ifdef COLFER_ENDIAN
		memcpy(&o->left_trigger, p, 4);
		p += 4;
#else
		uint_fast32_t x = *p++;
		x <<= 24;
		x |= (uint_fast32_t) *p++ << 16;
		x |= (uint_fast32_t) *p++ << 8;
		x |= (uint_fast32_t) *p++;
		memcpy(&o->left_trigger, &x, 4);
#endif
		header = *p++;
	}

	if (header == 3) {
		if (p+4 >= end) {
			errno = enderr;
			return 0;
		}
#ifdef COLFER_ENDIAN
		memcpy(&o->right_trigger, p, 4);
		p += 4;
#else
		uint_fast32_t x = *p++;
		x <<= 24;
		x |= (uint_fast32_t) *p++ << 16;
		x |= (uint_fast32_t) *p++ << 8;
		x |= (uint_fast32_t) *p++;
		memcpy(&o->right_trigger, &x, 4);
#endif
		header = *p++;
	}

	if (header == 4) {
		if (p+4 >= end) {
			errno = enderr;
			return 0;
		}
#ifdef COLFER_ENDIAN
		memcpy(&o->left_thumbstick_x, p, 4);
		p += 4;
#else
		uint_fast32_t x = *p++;
		x <<= 24;
		x |= (uint_fast32_t) *p++ << 16;
		x |= (uint_fast32_t) *p++ << 8;
		x |= (uint_fast32_t) *p++;
		memcpy(&o->left_thumbstick_x, &x, 4);
#endif
		header = *p++;
	}

	if (header == 5) {
		if (p+4 >= end) {
			errno = enderr;
			return 0;
		}
#ifdef COLFER_ENDIAN
		memcpy(&o->left_thumbstick_y, p, 4);
		p += 4;
#else
		uint_fast32_t x = *p++;
		x <<= 24;
		x |= (uint_fast32_t) *p++ << 16;
		x |= (uint_fast32_t) *p++ << 8;
		x |= (uint_fast32_t) *p++;
		memcpy(&o->left_thumbstick_y, &x, 4);
#endif
		header = *p++;
	}

	if (header == 6) {
		if (p+4 >= end) {
			errno = enderr;
			return 0;
		}
#ifdef COLFER_ENDIAN
		memcpy(&o->right_thumbstick_x, p, 4);
		p += 4;
#else
		uint_fast32_t x = *p++;
		x <<= 24;
		x |= (uint_fast32_t) *p++ << 16;
		x |= (uint_fast32_t) *p++ << 8;
		x |= (uint_fast32_t) *p++;
		memcpy(&o->right_thumbstick_x, &x, 4);
#endif
		header = *p++;
	}

	if (header == 7) {
		if (p+4 >= end) {
			errno = enderr;
			return 0;
		}
#ifdef COLFER_ENDIAN
		memcpy(&o->right_thumbstick_y, p, 4);
		p += 4;
#else
		uint_fast32_t x = *p++;
		x <<= 24;
		x |= (uint_fast32_t) *p++ << 16;
		x |= (uint_fast32_t) *p++ << 8;
		x |= (uint_fast32_t) *p++;
		memcpy(&o->right_thumbstick_y, &x, 4);
#endif
		header = *p++;
	}

	if (header != 127) {
		errno = EILSEQ;
		return 0;
	}

	return (size_t) (p - (const uint8_t*) data);
}

size_t vgp_data_exchange_message_marshal_len(const vgp_data_exchange_message* o) {
	size_t l = 1;

	{
		size_t n = o->contents.len;
		if (n > colfer_size_max) {
			errno = EFBIG;
			return 0;
		}
		if (n) for (l += 2 + n; n > 127; n >>= 7, ++l);
	}

	if (l > colfer_size_max) {
		errno = EFBIG;
		return 0;
	}
	return l;
}

size_t vgp_data_exchange_message_marshal(const vgp_data_exchange_message* o, void* buf) {
	// octet pointer navigation
	uint8_t* p = buf;

	{
		size_t n = o->contents.len;
		if (n) {
			*p++ = 0;

			uint_fast32_t x = n;
			for (; x >= 128; x >>= 7) *p++ = x | 128;
			*p++ = x;

			memcpy(p, o->contents.utf8, n);
			p += n;
		}
	}

	*p++ = 127;

	return p - (uint8_t*) buf;
}

size_t vgp_data_exchange_message_unmarshal(vgp_data_exchange_message* o, const void* data, size_t datalen) {
	// octet pointer navigation
	const uint8_t* p = data;
	const uint8_t* end;
	int enderr;
	if (datalen < colfer_size_max) {
		end = p + datalen;
		enderr = EWOULDBLOCK;
	} else {
		end = p + colfer_size_max;
		enderr = EFBIG;
	}

	if (p >= end) {
		errno = enderr;
		return 0;
	}
	uint_fast8_t header = *p++;

	if (header == 0) {
		if (p >= end) {
			errno = enderr;
			return 0;
		}
		size_t n = *p++;
		if (n > 127) {
			n &= 127;
			for (int shift = 7; shift < sizeof(size_t) * CHAR_BIT; shift += 7) {
				if (p >= end) {
					errno = enderr;
					return 0;
				}
				size_t c = *p++;
				if (c <= 127) {
					n |= c << shift;
					break;
				}
				n |= (c & 127) << shift;
			}
		}
		if (n > colfer_size_max) {
			errno = EFBIG;
			return 0;
		}
		if (p+n >= end) {
			errno = enderr;
			return 0;
		}
		o->contents.len = n;

		void* a = malloc(n);
		o->contents.utf8 = (char*) a;
		if (n) {
			memcpy(a, p, n);
			p += n;
		}
		header = *p++;
	}

	if (header != 127) {
		errno = EILSEQ;
		return 0;
	}

	return (size_t) (p - (const uint8_t*) data);
}
