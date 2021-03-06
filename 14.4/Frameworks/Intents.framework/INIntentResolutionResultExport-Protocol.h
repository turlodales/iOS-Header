//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INIntentSlotDescription, NSArray, NSData, NSObject;

@protocol INIntentResolutionResultExport <NSObject, JSExport>
+ (id)resolutionResultNotRequired;
+ (id)resolutionResultNeedsValue;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1 alternativeItems:(NSArray *)arg2;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1;
+ (id)resolutionResultConfirmationRequiredWithItemToConfirm:(NSObject *)arg1;
+ (id)resolutionResultDisambiguationWithItemsToDisambiguate:(NSArray *)arg1;
+ (id)resolutionResultSuccessWithResolvedValue:(NSObject *)arg1;
@property(nonatomic) unsigned long long unsupportedReason;
@property(retain, nonatomic) NSObject *itemToConfirm;
@property(retain, nonatomic) NSObject *resolvedValue;
@property(retain, nonatomic) NSArray *alternatives;
@property(retain, nonatomic) NSArray *disambiguationItems;
- (NSData *)_dataForIntentSlotDescription:(INIntentSlotDescription *)arg1;
- (id)init;
@end

