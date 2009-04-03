/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "guestfs_protocol.h"

bool_t
xdr_guestfs_mount_args (XDR *xdrs, guestfs_mount_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->device, ~0))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->mountpoint, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_touch_args (XDR *xdrs, guestfs_touch_args *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->path, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_procedure (XDR *xdrs, guestfs_procedure *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_message_direction (XDR *xdrs, guestfs_message_direction *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_message_status (XDR *xdrs, guestfs_message_status *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_message_error (XDR *xdrs, guestfs_message_error *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->error, GUESTFS_ERROR_LEN))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_guestfs_message_header (XDR *xdrs, guestfs_message_header *objp)
{
	register int32_t *buf;

	 if (!xdr_u_int (xdrs, &objp->prog))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->vers))
		 return FALSE;
	 if (!xdr_guestfs_procedure (xdrs, &objp->proc))
		 return FALSE;
	 if (!xdr_guestfs_message_direction (xdrs, &objp->direction))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->serial))
		 return FALSE;
	 if (!xdr_guestfs_message_status (xdrs, &objp->status))
		 return FALSE;
	return TRUE;
}
