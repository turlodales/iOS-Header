//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBAlarm;

@protocol _INPBCreateAlarmIntentResponse <NSObject>
@property(nonatomic) _Bool hasSuccessCode;
@property(nonatomic) int successCode;
@property(readonly, nonatomic) _Bool hasCreatedAlarm;
@property(retain, nonatomic) _INPBAlarm *createdAlarm;
- (int)StringAsSuccessCode:(NSString *)arg1;
- (NSString *)successCodeAsString:(int)arg1;
@end

