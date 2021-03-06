//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class NSString, WFSetRadioAccessTechnologyIntent;

@protocol WFSetRadioAccessTechnologyIntentHandling <NSObject>
- (void)provideRatModeOptionsCollectionForSetRadioAccessTechnology:(WFSetRadioAccessTechnologyIntent *)arg1 withCompletion:(void (^)(INObjectCollection *, NSError *))arg2;
- (void)provideSimOptionsCollectionForSetRadioAccessTechnology:(WFSetRadioAccessTechnologyIntent *)arg1 withCompletion:(void (^)(INObjectCollection *, NSError *))arg2;
- (void)handleSetRadioAccessTechnology:(WFSetRadioAccessTechnologyIntent *)arg1 completion:(void (^)(WFSetRadioAccessTechnologyIntentResponse *))arg2;

@optional
- (void)provideRatModeOptionsForSetRadioAccessTechnology:(WFSetRadioAccessTechnologyIntent *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)provideSimOptionsForSetRadioAccessTechnology:(WFSetRadioAccessTechnologyIntent *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSString *)defaultRatModeForSetRadioAccessTechnology:(WFSetRadioAccessTechnologyIntent *)arg1;
- (NSString *)defaultSimForSetRadioAccessTechnology:(WFSetRadioAccessTechnologyIntent *)arg1;
- (void)confirmSetRadioAccessTechnology:(WFSetRadioAccessTechnologyIntent *)arg1 completion:(void (^)(WFSetRadioAccessTechnologyIntentResponse *))arg2;
@end

