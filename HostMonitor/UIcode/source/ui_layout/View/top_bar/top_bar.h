#ifndef _TOP_BAR_H_
#define _TOP_BAR_H_

class c_top_bar : public c_wnd
{
public:
	static void sysinfo_timer_callback(void* ptmr, void* parg);
protected:
	virtual void on_init_children(void);
	virtual void on_paint(void);
	void on_refurbish_time(int id, int param);
	GL_DECLARE_MESSAGE_MAP()
};

#endif
