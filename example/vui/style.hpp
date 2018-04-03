#pragma once

#include "fwd.hpp"
#include <vgv/vgv.hpp>
#include <optional>
#include <array>

namespace vui {

struct ButtonDraw {
	vgv::PaintData label;
	vgv::PaintData bg;
	std::optional<vgv::PaintData> bgStroke;
};

struct ButtonStyle {
	ButtonDraw normal;
	ButtonDraw hovered;
	ButtonDraw pressed;
	Vec2f padding = Vec {20.f, 10.f};
	std::array<float, 4> rounding = {};
	Font* font;
};

struct TextfieldStyle {
	vgv::PaintData label;
	vgv::PaintData bg;
	vgv::PaintData selection;
};

struct WindowStyle {
	vgv::Paint* bg;
	vgv::Paint* bgStroke;
	std::array<float, 4> rounding {3.f, 3.f, 3.f, 3.f};
	Vec2f outerPadding = Vec {10.f, 10.f};
	float innerPadding = 10.f;
};

struct SliderStyle {
	vgv::PaintData left;
	vgv::PaintData right;
};

struct HintStyle {
	Paint* bg; /// Background paint
	Paint* text; /// Label/text paint
	Paint* bgStroke {}; /// (optional) background stroke (border)
	Vec2f padding {5.f, 5.f}; /// padding, distance from label to border
	std::array<float, 4> rounding {3.f, 3.f, 3.f, 3.f};
	Font* font {}; /// Font to use, falls back to guis default font
};

struct ColorPickerStyle {
	vgv::Paint* marker; // marker stroking
	vgv::Paint* stroke {}; // (optional) hue + selector field stroke
	Vec2f padding = {5.f, 5.f};
	float huePadding = 10.f;
	float strokeWidth = 1.5f;
	float colorMarkerRadius = 3.f;
	float colorMarkerThickness = 1.5f;
	float hueMarkerHeight = 8.f;
	float hueMarkerThickness = 4.f;
	float hueWidth = 20.f;
};

struct Styles {
	ButtonStyle button {};
	TextfieldStyle textfield {};
	WindowStyle window {};
	SliderStyle slider {};
	HintStyle hint {};
	ColorPickerStyle colorPicker {};
};

} // namespace vui