/*
 * The contents of this file are subject to the Mozilla Public
 * License Version 1.1 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of
 * the License at http://www.mozilla.org/MPL/
 * 
 * Software distributed under the License is distributed on an "AS
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * rights and limitations under the License.
 * 
 * The Original Code is TransforMiiX XSLT processor.
 * 
 * The Initial Developer of the Original Code is Keith Visco.
 * Portions created by Keith Visco (C) 1999, 2000 Keith Visco.
 * All Rights Reserved..
 *
 * Contributor(s): 
 * Keith Visco, kvisco@ziplink.net
 *    -- original author.
 *
 * $Id: TxObject.h,v 1.1 2000/03/02 09:16:44 kvisco%ziplink.net Exp $
 */


#include "baseutils.h"

#ifndef TRANSFRMX_TXOBJECT_H
#define TRANSFRMX_TXOBJECT_H

class TxObject {

 public:

    /**
     * Creates a new TxObject
    **/
    TxObject() {};

    /**
     * Deletes this TxObject
	**/
    virtual ~TxObject() {};

    /**
     * Returns the Hashcode for this TxObject
	**/
    Int32 hashCode() {
	    return (Int32)this;
    } //-- hashCode

};

#endif
