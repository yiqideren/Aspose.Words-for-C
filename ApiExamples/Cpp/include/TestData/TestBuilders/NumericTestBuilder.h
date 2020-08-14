﻿#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/nullable.h>
#include <system/date_time.h>
#include <cstdint>

namespace ApiExamples { namespace TestData { namespace TestClasses { class NumericTestClass; } } }

namespace ApiExamples {

namespace TestData {

namespace TestBuilders {

class NumericTestBuilder : public System::Object
{
    typedef NumericTestBuilder ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    NumericTestBuilder();
    
    System::SharedPtr<NumericTestBuilder> WithValuesAndDate(System::Nullable<int32_t> value1, double value2, int32_t value3, System::Nullable<int32_t> value4, System::DateTime dateTime);
    System::SharedPtr<NumericTestBuilder> WithValuesAndLogical(System::Nullable<int32_t> value1, double value2, int32_t value3, System::Nullable<int32_t> value4, bool logical);
    System::SharedPtr<ApiExamples::TestData::TestClasses::NumericTestClass> Build();
    
protected:

    virtual ~NumericTestBuilder();
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::Nullable<int32_t> mValue1;
    double mValue2;
    int32_t mValue3;
    System::Nullable<int32_t> mValue4;
    bool mLogical;
    System::DateTime mDate;
    
};

} // namespace TestBuilders
} // namespace TestData
} // namespace ApiExamples

