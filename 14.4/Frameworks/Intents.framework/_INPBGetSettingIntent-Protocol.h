//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBSettingMetadata;

@protocol _INPBGetSettingIntent <NSObject>
@property(readonly, nonatomic) _Bool hasSettingMetadata;
@property(retain, nonatomic) _INPBSettingMetadata *settingMetadata;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) _Bool hasConfirmationValue;
@property(nonatomic) int confirmationValue;
- (int)StringAsConfirmationValue:(NSString *)arg1;
- (NSString *)confirmationValueAsString:(int)arg1;
@end

