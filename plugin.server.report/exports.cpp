#include "stdafx.h"
#include "exports.h"

namespace plugin {

	const char plugin_name[] = "server.report";
	const char plugin_sign_ext[] = "api_plugin_open@打开,api_plugin_close@关闭,api_plugin_about@关于";

	__plugin_api_ int __stdcall api_plugin_init(
		char** PluginName, size_t& nPluginName,
		char** PluginSignExt, size_t& nPluginSignExt
		)
	{
		if (!PluginName || nPluginName <= 0)
			return -1;
		nPluginName = __min(strlen(plugin_name) + 1, nPluginName);
		sk::SafeCopyA(*PluginName, plugin_name, nPluginName);

		if (PluginSignExt && nPluginSignExt > 0)
		{
			nPluginSignExt = __min(strlen(plugin_sign_ext) + 1, nPluginSignExt);
			sk::SafeCopyA(*PluginSignExt, plugin_sign_ext, nPluginSignExt);
		}
		return 0;
	}
	__plugin_api_ int __stdcall api_plugin_uninit()
	{
		return 0;
	}
	__plugin_api_ int __stdcall api_plugin_start(const std::intptr_t& obj_spi_ptr)
	{
		return 0;
	}
	__plugin_api_ int __stdcall api_plugin_stop()
	{
		return 0;
	}

	__plugin_api_ void __stdcall api_plugin_open()
	{

	}
	__plugin_api_ void __stdcall api_plugin_close()
	{

	}
	__plugin_api_ void __stdcall api_plugin_about()
	{

	}
}///namespace plugin
