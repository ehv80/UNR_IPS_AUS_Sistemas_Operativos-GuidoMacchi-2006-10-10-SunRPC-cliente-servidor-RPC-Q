/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "q.h"

bool_t
xdr_PDouble (XDR *xdrs, PDouble *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)objp, sizeof (double), (xdrproc_t) xdr_double))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_PInt (XDR *xdrs, PInt *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)objp, sizeof (int), (xdrproc_t) xdr_int))
		 return FALSE;
	return TRUE;
}