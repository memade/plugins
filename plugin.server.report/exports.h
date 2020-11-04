#if !defined(AFX_SKSTU_exports_H__B1642_E5D5885D_329977AF9437C12_BB88__HEAD__)
#define AFX_SKSTU_exports_H__B1642_E5D5885D_329977AF9437C12_BB88__HEAD__


#if defined(PLUGIN_API_EXPORTS)
#define __plugin_api_ extern "C" __declspec(dllexport)
#else
#define __plugin_api_ extern "C" __declspec(dllimport)
#endif

namespace plugin {
	__plugin_api_ int __stdcall api_plugin_init(
		char**,size_t& ,
		char**,size_t&);
	__plugin_api_ int __stdcall api_plugin_uninit();
	__plugin_api_ int __stdcall api_plugin_start(const std::intptr_t& obj_spi_ptr);
	__plugin_api_ int __stdcall api_plugin_stop();

	__plugin_api_ void __stdcall api_plugin_open();
	__plugin_api_ void __stdcall api_plugin_close();
	__plugin_api_ void __stdcall api_plugin_about();







}///namespace plugin




/// /*新生联创（上海）**/
/// /*2019年06月1日 1:26:06|647**/
/// /*_ _ _ _ _ _ _ www.skstu.com _ _ _ _ _ _ _**/
#endif ///AFX_SKSTU_exports_H__B1642_E5D5885D_329977AF9437C12_BB88__TAIL__
