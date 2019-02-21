/*
* Copyright (c) 2009-2011 Hazard (hazard_x@gmx.net / twitter.com/HazardX)
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/

#pragma once
#pragma managed

namespace GTA {
namespace Forms {

	using namespace Drawing;

	CLASS_ATTRIBUTES
	public ref class Button : public GTA::Forms::Control {

	private:
		Drawing::Color pDownColor;
		bool bDown;

	public:
		Button() {
			pDownColor = Drawing::Color::FromArgb(50, 0, 0, 0);
			bDown = false;
		}



	public protected:

		virtual void OnMouseDown(GTA::MouseEventArgs^ e) override;
		virtual void OnDragRelease(GTA::MouseEventArgs^ e) override;

		virtual void OnClick(GTA::MouseEventArgs^ e) override;

	protected:
		virtual void OnPaint(GTA::GraphicsEventArgs^ e) override;

		property Drawing::Size DefaultSize {
			virtual Drawing::Size get() override {
				return Drawing::Size(128,32);
			}
		}

	};

}
}