#pragma once
#include <Interfaces/IInitializable.hpp>

namespace AnvilEldorado
{
	class Engine : public AnvilCommon::IInitializable
	{
	public:
		virtual bool Init() override;
	};
}