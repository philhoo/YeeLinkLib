#ifndef ARDUINO_YEELINKLIB_DATAPOINT_H
#define ARDUINO_YEELINKLIB_DATAPOINT_H

#include <WString.h>

namespace yeelink
{

	class yl_data_point
	{
	public:
		yl_data_point(const String &key = String());

		void set_key(const String &key);
		const String& get_key() const;
		virtual String to_string() const = 0;

	protected:
		String key_;
	};

}

#endif
