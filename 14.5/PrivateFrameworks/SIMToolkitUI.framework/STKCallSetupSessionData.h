//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SIMToolkitUI/STKTextSessionData.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface STKCallSetupSessionData : STKTextSessionData
{
    NSString *_phoneNumber;
    _Bool _isHighPriority;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isHighPriority; // @synthesize isHighPriority=_isHighPriority;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1 simLabel:(id)arg2 phoneNumber:(id)arg3;

@end

