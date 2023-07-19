// Code generated by colf(1); DO NOT EDIT.
// The compiler used schema file demo.colf and GamePadReading.colf for package VGP_Data_Exchange.

#ifndef COLFER_H
#define COLFER_H

#include <limits.h>
#include <stdint.h>
#include <string.h>

#if CHAR_BIT != 8
#error "octet byte size"
#endif

#ifdef __cplusplus
extern "C" {
#endif


// colfer_size_max is the upper limit for serial octet sizes.
extern size_t colfer_size_max;

// colfer_list_max is the upper limit for the number of elements in a list.
extern size_t colfer_list_max;


// colfer_text is a UTF-8 CLOB.
typedef struct {
	const char*  utf8;
	size_t       len;
} colfer_text;

// colfer_binary is a BLOB.
typedef struct {
	uint8_t* octets;
	size_t   len;
} colfer_binary;


typedef struct vgp_data_exchange_gamepad_reading vgp_data_exchange_gamepad_reading;

typedef struct vgp_data_exchange_message vgp_data_exchange_message;


// Inspired by the GamepadReading struct in the Windows API.
// https://learn.microsoft.com/en-us/uwp/api/windows.gaming.input.gamepadreading
struct vgp_data_exchange_gamepad_reading {

	uint32_t buttons_up;

	uint32_t buttons_down;

	float left_trigger;

	float right_trigger;

	float left_thumbstick_x;

	float left_thumbstick_y;

	float right_thumbstick_x;

	float right_thumbstick_y;
};

// vgp_data_exchange_gamepad_reading_marshal_len returns the Colfer serial octet size.
// When the return is zero then errno is set to EFBIG to indicate a breach of
// either colfer_size_max or colfer_list_max.
size_t vgp_data_exchange_gamepad_reading_marshal_len(const vgp_data_exchange_gamepad_reading* o);

// vgp_data_exchange_gamepad_reading_marshal encodes o as Colfer into buf and returns the number
// of octets written.
size_t vgp_data_exchange_gamepad_reading_marshal(const vgp_data_exchange_gamepad_reading* o, void* buf);

// vgp_data_exchange_gamepad_reading_unmarshal decodes data as Colfer into o and returns the
// number of octets read. The data is read up to a maximum of datalen or
// colfer_size_max, whichever occurs first.
// When the return is zero then errno is set to one of the following 3 values:
// EWOULDBLOCK on incomplete data, EFBIG on a breach of either colfer_size_max
// or colfer_list_max and EILSEQ on schema mismatch.
size_t vgp_data_exchange_gamepad_reading_unmarshal(vgp_data_exchange_gamepad_reading* o, const void* data, size_t datalen);

// A message and its contents. :)
struct vgp_data_exchange_message {

	colfer_text contents;
};

// vgp_data_exchange_message_marshal_len returns the Colfer serial octet size.
// When the return is zero then errno is set to EFBIG to indicate a breach of
// either colfer_size_max or colfer_list_max.
size_t vgp_data_exchange_message_marshal_len(const vgp_data_exchange_message* o);

// vgp_data_exchange_message_marshal encodes o as Colfer into buf and returns the number
// of octets written.
size_t vgp_data_exchange_message_marshal(const vgp_data_exchange_message* o, void* buf);

// vgp_data_exchange_message_unmarshal decodes data as Colfer into o and returns the
// number of octets read. The data is read up to a maximum of datalen or
// colfer_size_max, whichever occurs first.
// When the return is zero then errno is set to one of the following 3 values:
// EWOULDBLOCK on incomplete data, EFBIG on a breach of either colfer_size_max
// or colfer_list_max and EILSEQ on schema mismatch.
size_t vgp_data_exchange_message_unmarshal(vgp_data_exchange_message* o, const void* data, size_t datalen);


#ifdef __cplusplus
} // extern "C"
#endif

#endif
