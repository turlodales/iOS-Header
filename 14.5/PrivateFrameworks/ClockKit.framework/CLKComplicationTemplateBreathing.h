//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@interface CLKComplicationTemplateBreathing : CLKComplicationTemplate
{
    long long _family;
    long long _sessionCount;
}

+ (id)breathingTemplateWithFamily:(long long)arg1;
@property(nonatomic) long long sessionCount; // @synthesize sessionCount=_sessionCount;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compatibleFamily;
- (id)initWithFamily:(long long)arg1;

@end

