//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemResultComponent.h>

@class HMSymptom, NSString, NSURL;

@interface HFErrorResultComponent : HFItemResultComponent
{
    _Bool _updateInProgress;
    unsigned long long _category;
    HMSymptom *_underlyingSymptom;
    NSString *_errorDescription;
    NSString *_detailedErrorDescription;
    long long _displayPriority;
    unsigned long long _badgeType;
    NSString *_errorMessageTitle;
    NSString *_errorMessageButtonTitle;
    NSURL *_errorHandlerURL;
    NSString *_errorHandlerURLText;
}

+ (long long)priorityForCategory:(unsigned long long)arg1;
+ (_Bool)_requiresManualFixOptionToDisplaySymptom:(id)arg1;
+ (long long)_displayPriorityForSymptom:(id)arg1;
+ (id)componentForSymptom:(id)arg1 contextProvider:(id)arg2;
+ (id)componentForAccessoryReprovisionState:(unsigned long long)arg1;
+ (id)componentForWriteErrorForCharacteristics:(id)arg1 valueSource:(id)arg2;
+ (id)componentForUnreachableAccessoryWithContextProvider:(id)arg1;
+ (id)componentForDisplayError:(id)arg1 symptomContextProvider:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool updateInProgress; // @synthesize updateInProgress=_updateInProgress;
@property(copy, nonatomic) NSString *errorHandlerURLText; // @synthesize errorHandlerURLText=_errorHandlerURLText;
@property(copy, nonatomic) NSURL *errorHandlerURL; // @synthesize errorHandlerURL=_errorHandlerURL;
@property(copy, nonatomic) NSString *errorMessageButtonTitle; // @synthesize errorMessageButtonTitle=_errorMessageButtonTitle;
@property(copy, nonatomic) NSString *errorMessageTitle; // @synthesize errorMessageTitle=_errorMessageTitle;
@property(nonatomic) unsigned long long badgeType; // @synthesize badgeType=_badgeType;
@property(nonatomic) long long displayPriority; // @synthesize displayPriority=_displayPriority;
@property(copy, nonatomic) NSString *detailedErrorDescription; // @synthesize detailedErrorDescription=_detailedErrorDescription;
@property(copy, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(retain, nonatomic) HMSymptom *underlyingSymptom; // @synthesize underlyingSymptom=_underlyingSymptom;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
- (id)results;
- (long long)componentPriority;
- (id)initWithCategory:(unsigned long long)arg1;
- (id)init;
- (void)_addAccountSymptomMessageForAccountName:(id)arg1 symptom:(id)arg2;

@end

