//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (CRKAdditions)
+ (id)crk_errorForSecurityOSStatus:(int)arg1;
+ (id)crk_EDUProfileErrorWithCode:(long long)arg1 errorField:(id)arg2 andValue:(id)arg3;
+ (id)crk_topLevelUserIsNeitherLeaderNorMemberErrorWithUserIdentifier:(id)arg1;
+ (id)crk_topLevelUserIsBothLeaderAndMemberErrorWithUserIdentifier:(id)arg1;
+ (id)crk_allOrNoneKeysErrorWithProvidedKeys:(id)arg1 allOrNoneKeys:(id)arg2;
+ (id)crk_malformedProfileErrorWithField:(id)arg1 value:(id)arg2;
+ (id)crk_unsupportedValueErrorWithField:(id)arg1 value:(id)arg2;
+ (id)crk_valueNotUniqueErrorWithField:(id)arg1 value:(id)arg2;
+ (id)crk_missingFieldErrorWithField:(id)arg1;
+ (id)crk_badFieldTypeErrorWithField:(id)arg1;
+ (id)crk_EDUProfileErrorWithCode:(long long)arg1 errorDictionary:(id)arg2;
@end

