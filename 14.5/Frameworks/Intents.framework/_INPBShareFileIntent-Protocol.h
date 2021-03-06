//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBShareDestination, _INPBString;

@protocol _INPBShareFileIntent <NSObject>
+ (Class)recipientsType;
+ (Class)entityNameType;
@property(nonatomic) _Bool hasShareMode;
@property(nonatomic) int shareMode;
@property(readonly, nonatomic) unsigned long long recipientsCount;
@property(copy, nonatomic) NSArray *recipients;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long entityNamesCount;
@property(copy, nonatomic) NSArray *entityNames;
- (int)StringAsShareMode:(NSString *)arg1;
- (NSString *)shareModeAsString:(int)arg1;
- (_INPBShareDestination *)recipientsAtIndex:(unsigned long long)arg1;
- (void)addRecipients:(_INPBShareDestination *)arg1;
- (void)clearRecipients;
- (_INPBString *)entityNameAtIndex:(unsigned long long)arg1;
- (void)addEntityName:(_INPBString *)arg1;
- (void)clearEntityNames;
@end

