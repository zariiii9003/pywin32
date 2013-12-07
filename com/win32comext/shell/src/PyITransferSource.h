// This file declares the ITransferSource Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyITransferSource : public PyIUnknown
{
public:
	MAKE_PYCOM_CTOR(PyITransferSource);
	static ITransferSource *GetI(PyObject *self);
	static PyComTypeObject type;

	// The Python methods
	static PyObject *Advise(PyObject *self, PyObject *args);
	static PyObject *Unadvise(PyObject *self, PyObject *args);
	static PyObject *SetProperties(PyObject *self, PyObject *args);
	static PyObject *OpenItem(PyObject *self, PyObject *args);
	static PyObject *MoveItem(PyObject *self, PyObject *args);
	static PyObject *RecycleItem(PyObject *self, PyObject *args);
	static PyObject *RemoveItem(PyObject *self, PyObject *args);
	static PyObject *RenameItem(PyObject *self, PyObject *args);
	static PyObject *LinkItem(PyObject *self, PyObject *args);
	static PyObject *ApplyPropertiesToItem(PyObject *self, PyObject *args);
	static PyObject *GetDefaultDestinationName(PyObject *self, PyObject *args);
	static PyObject *EnterFolder(PyObject *self, PyObject *args);
	static PyObject *LeaveFolder(PyObject *self, PyObject *args);

protected:
	PyITransferSource(IUnknown *pdisp);
	~PyITransferSource();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGTransferSource : public PyGatewayBase, public ITransferSource
{
protected:
	PyGTransferSource(PyObject *instance) : PyGatewayBase(instance) { ; }
	PYGATEWAY_MAKE_SUPPORT2(PyGTransferSource, ITransferSource, IID_ITransferSource, PyGatewayBase)



	// ITransferSource
	STDMETHOD(Advise)(
		ITransferAdviseSink * psink,
		DWORD * pdwCookie);

	STDMETHOD(Unadvise)(
		DWORD dwCookie);

	STDMETHOD(SetProperties)(
		IPropertyChangeArray * pproparray);

	STDMETHOD(OpenItem)(
		IShellItem * psi,
		TRANSFER_SOURCE_FLAGS flags,
		REFIID riid,
		void ** ppv);

	STDMETHOD(MoveItem)(
		IShellItem * psi,
		IShellItem * psiParentDst,
		LPCWSTR pszNameDst,
		TRANSFER_SOURCE_FLAGS flags,
		IShellItem ** ppsiNew);

	STDMETHOD(RecycleItem)(
		IShellItem * psiSource,
		IShellItem * psiParentDest,
		TRANSFER_SOURCE_FLAGS flags,
		IShellItem ** ppsiNewDest);

	STDMETHOD(RemoveItem)(
		IShellItem * psiSource,
		TRANSFER_SOURCE_FLAGS flags);

	STDMETHOD(RenameItem)(
		IShellItem * psiSource,
		LPCWSTR pszNewName,
		TRANSFER_SOURCE_FLAGS flags,
		IShellItem ** ppsiNewDest);

	STDMETHOD(LinkItem)(
		IShellItem * psiSource,
		IShellItem * psiParentDest,
		LPCWSTR pszNewName,
		TRANSFER_SOURCE_FLAGS flags,
		IShellItem ** ppsiNewDest);

	STDMETHOD(ApplyPropertiesToItem)(
		IShellItem * psiSource,
		IShellItem ** ppsiNew);

	STDMETHOD(GetDefaultDestinationName)(
		IShellItem * psiSource,
		IShellItem * psiParentDest,
		LPWSTR * ppszDestinationName);

	STDMETHOD(EnterFolder)(
		IShellItem * psiChildFolderDest);

	STDMETHOD(LeaveFolder)(
		IShellItem * psiChildFolderDest);

};