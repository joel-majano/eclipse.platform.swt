package org.eclipse.swt.internal.ole.win32;

/*
 * (c) Copyright IBM Corp. 2000, 2001.
 * All Rights Reserved
 */
public class IDataObject extends IUnknown {
public IDataObject(int address) {
	super(address);
}
public int EnumFormatEtc(int dwDirection, int[] ppenumFormatetc) {
	return COM.VtblCall(8, address, dwDirection, ppenumFormatetc);
}
public int GetData(FORMATETC pFormatetc, STGMEDIUM pmedium) {
	//Called by a data consumer to obtain data from a source data object. 
	//The GetData method renders the data described in the specified FORMATETC 
	//structure and transfers it through the specified STGMEDIUM structure. 
	//The caller then assumes responsibility for releasing the STGMEDIUM structure.
	return COM.VtblCall(3, address, pFormatetc, pmedium);
}
public int GetDataHere(FORMATETC pFormatetc, STGMEDIUM pmedium) {
	//Called by a data consumer to obtain data from a source data object. 
	//This method differs from the GetData method in that the caller must 
	//allocate and free the specified storage medium.
	return COM.VtblCall(4, address, pFormatetc, pmedium);
}
public int QueryGetData(FORMATETC pFormatetc) {
	return COM.VtblCall(5, address, pFormatetc);
}
public int SetData(
	FORMATETC pFormatetc,  // Pointer to the FORMATETC structure
	STGMEDIUM pmedium,     // Pointer to STGMEDIUM structure
	boolean fRelease     // Indicates which object owns the storage medium after the call is completed
	){
	return COM.VtblCall(7, address, pFormatetc, pmedium, fRelease);
}
}
