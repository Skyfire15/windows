/***************************************************************************

Copyright (c) Microsoft Corporation. All rights reserved.
This code is licensed under the Visual Studio SDK license terms.
THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.

This code is a part of the Visual Studio Library.

***************************************************************************/

#ifndef IOLEINPLACEOBJECTWINDOWLESS_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5
#define IOLEINPLACEOBJECTWINDOWLESS_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5

#if _MSC_VER > 1000
#pragma once
#endif

#include "OCIdl.h"

#pragma warning(push)
#pragma warning(disable : 4510) // default constructor could not be generated
#pragma warning(disable : 4610) // can never be instantiated - user defined constructor required
#pragma warning(disable : 4512) // assignment operator could not be generated
#pragma warning(disable : 6011) // Dereferencing NULL pointer (a NULL derference is just another kind of failure for a unit test

namespace VSL
{

class IOleInPlaceObjectWindowlessNotImpl :
	public IOleInPlaceObjectWindowless
{

VSL_DECLARE_NONINSTANTIABLE_BASE_CLASS(IOleInPlaceObjectWindowlessNotImpl)

public:

	typedef IOleInPlaceObjectWindowless Interface;

	STDMETHOD(OnWindowMessage)(
		/*[in]*/ UINT /*msg*/,
		/*[in]*/ WPARAM /*wParam*/,
		/*[in]*/ LPARAM /*lParam*/,
		/*[out]*/ LRESULT* /*plResult*/)VSL_STDMETHOD_NOTIMPL

	STDMETHOD(GetDropTarget)(
		/*[out]*/ IDropTarget** /*ppDropTarget*/)VSL_STDMETHOD_NOTIMPL

	STDMETHOD(InPlaceDeactivate)()VSL_STDMETHOD_NOTIMPL

	STDMETHOD(UIDeactivate)()VSL_STDMETHOD_NOTIMPL

	STDMETHOD(SetObjectRects)(
		/*[in]*/ LPCRECT /*lprcPosRect*/,
		/*[in]*/ LPCRECT /*lprcClipRect*/)VSL_STDMETHOD_NOTIMPL

	STDMETHOD(ReactivateAndUndo)()VSL_STDMETHOD_NOTIMPL

	STDMETHOD(GetWindow)(
		/*[out]*/ HWND* /*phwnd*/)VSL_STDMETHOD_NOTIMPL

	STDMETHOD(ContextSensitiveHelp)(
		/*[in]*/ BOOL /*fEnterMode*/)VSL_STDMETHOD_NOTIMPL
};

class IOleInPlaceObjectWindowlessMockImpl :
	public IOleInPlaceObjectWindowless,
	public MockBase
{

VSL_DECLARE_NONINSTANTIABLE_BASE_CLASS(IOleInPlaceObjectWindowlessMockImpl)

public:

VSL_DEFINE_MOCK_CLASS_TYPDEFS(IOleInPlaceObjectWindowlessMockImpl)

	typedef IOleInPlaceObjectWindowless Interface;
	struct OnWindowMessageValidValues
	{
		/*[in]*/ UINT msg;
		/*[in]*/ WPARAM wParam;
		/*[in]*/ LPARAM lParam;
		/*[out]*/ LRESULT* plResult;
		HRESULT retValue;
	};

	STDMETHOD(OnWindowMessage)(
		/*[in]*/ UINT msg,
		/*[in]*/ WPARAM wParam,
		/*[in]*/ LPARAM lParam,
		/*[out]*/ LRESULT* plResult)
	{
		VSL_DEFINE_MOCK_METHOD(OnWindowMessage)

		VSL_CHECK_VALIDVALUE(msg);

		VSL_CHECK_VALIDVALUE(wParam);

		VSL_CHECK_VALIDVALUE(lParam);

		VSL_SET_VALIDVALUE(plResult);

		VSL_RETURN_VALIDVALUES();
	}
	struct GetDropTargetValidValues
	{
		/*[out]*/ IDropTarget** ppDropTarget;
		HRESULT retValue;
	};

	STDMETHOD(GetDropTarget)(
		/*[out]*/ IDropTarget** ppDropTarget)
	{
		VSL_DEFINE_MOCK_METHOD(GetDropTarget)

		VSL_SET_VALIDVALUE_INTERFACE(ppDropTarget);

		VSL_RETURN_VALIDVALUES();
	}
	struct InPlaceDeactivateValidValues
	{
		HRESULT retValue;
	};

	STDMETHOD(InPlaceDeactivate)()
	{
		VSL_DEFINE_MOCK_METHOD_NOARGS(InPlaceDeactivate)

		VSL_RETURN_VALIDVALUES();
	}
	struct UIDeactivateValidValues
	{
		HRESULT retValue;
	};

	STDMETHOD(UIDeactivate)()
	{
		VSL_DEFINE_MOCK_METHOD_NOARGS(UIDeactivate)

		VSL_RETURN_VALIDVALUES();
	}
	struct SetObjectRectsValidValues
	{
		/*[in]*/ LPCRECT lprcPosRect;
		/*[in]*/ LPCRECT lprcClipRect;
		HRESULT retValue;
	};

	STDMETHOD(SetObjectRects)(
		/*[in]*/ LPCRECT lprcPosRect,
		/*[in]*/ LPCRECT lprcClipRect)
	{
		VSL_DEFINE_MOCK_METHOD(SetObjectRects)

		VSL_CHECK_VALIDVALUE(lprcPosRect);

		VSL_CHECK_VALIDVALUE(lprcClipRect);

		VSL_RETURN_VALIDVALUES();
	}
	struct ReactivateAndUndoValidValues
	{
		HRESULT retValue;
	};

	STDMETHOD(ReactivateAndUndo)()
	{
		VSL_DEFINE_MOCK_METHOD_NOARGS(ReactivateAndUndo)

		VSL_RETURN_VALIDVALUES();
	}
	struct GetWindowValidValues
	{
		/*[out]*/ HWND* phwnd;
		HRESULT retValue;
	};

	STDMETHOD(GetWindow)(
		/*[out]*/ HWND* phwnd)
	{
		VSL_DEFINE_MOCK_METHOD(GetWindow)

		VSL_SET_VALIDVALUE(phwnd);

		VSL_RETURN_VALIDVALUES();
	}
	struct ContextSensitiveHelpValidValues
	{
		/*[in]*/ BOOL fEnterMode;
		HRESULT retValue;
	};

	STDMETHOD(ContextSensitiveHelp)(
		/*[in]*/ BOOL fEnterMode)
	{
		VSL_DEFINE_MOCK_METHOD(ContextSensitiveHelp)

		VSL_CHECK_VALIDVALUE(fEnterMode);

		VSL_RETURN_VALIDVALUES();
	}
};


} // namespace VSL

#pragma warning(pop)

#endif // IOLEINPLACEOBJECTWINDOWLESS_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5
