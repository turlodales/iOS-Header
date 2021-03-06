//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface STCity : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_unlocalizedName;
    NSString *_countryName;
    NSString *_unlocalizedCountryName;
    NSString *_timeZone;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_alCityID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)alCityValue;
- (id)_initWithName:(id)arg1 unlocalizedName:(id)arg2 countryName:(id)arg3 unlocalizedCountryName:(id)arg4 timeZone:(id)arg5 latitude:(id)arg6 longitude:(id)arg7 alCityID:(id)arg8;

@end

