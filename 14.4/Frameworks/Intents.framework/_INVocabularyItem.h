//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface _INVocabularyItem : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _requiresUserIdentification;
    NSString *_string;
    NSString *_vocabularyIdentifier;
    NSUUID *__siriID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setSiriID:) NSUUID *_siriID; // @synthesize _siriID=__siriID;
@property(readonly, nonatomic) _Bool requiresUserIdentification; // @synthesize requiresUserIdentification=_requiresUserIdentification;
@property(readonly, nonatomic) NSString *vocabularyIdentifier; // @synthesize vocabularyIdentifier=_vocabularyIdentifier;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)validate;
- (id)_dictionaryForSaving;
- (_Bool)_isSimilarEnoughToNotSync:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithSpeakable:(id)arg1;
- (id)initWithString:(id)arg1 vocabularyIdentifier:(id)arg2 requiresUserIdentification:(_Bool)arg3;
- (id)initWithString:(id)arg1 vocabularyIdentifier:(id)arg2;
- (id)_initWithUncheckedSpeakable:(id)arg1;
- (id)_initWithUncheckedString:(id)arg1 vocabularyIdentifier:(id)arg2 requiresUserIdentification:(_Bool)arg3;
- (id)_initWithVocabularyItem:(id)arg1;

@end

