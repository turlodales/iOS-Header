//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSSecureCoding-Protocol.h>

@class CHDrawing, NSArray, NSDictionary;

@interface CHRemoteRecognitionRequest : NSObject <NSSecureCoding>
{
    _Bool _shouldUseTextReplacements;
    _Bool _enableCachingIfAvailable;
    _Bool _enableGen2ModelIfAvailable;
    _Bool _enableGen2CharacterLMIfAvailable;
    _Bool _hasBeenSubmitted;
    int _recognitionMode;
    int _contentType;
    int _autoCapitalizationMode;
    int _autoCorrectionMode;
    NSArray *_locales;
    NSDictionary *_activeCharacterSetPerLocale;
    unsigned long long _maxRecognitionResultCount;
    NSDictionary *_options;
    CHDrawing *_drawing;
    long long _priority;
    struct CGSize _minimumDrawingSize;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool hasBeenSubmitted; // @synthesize hasBeenSubmitted=_hasBeenSubmitted;
@property(nonatomic) _Bool enableGen2CharacterLMIfAvailable; // @synthesize enableGen2CharacterLMIfAvailable=_enableGen2CharacterLMIfAvailable;
@property(nonatomic) _Bool enableGen2ModelIfAvailable; // @synthesize enableGen2ModelIfAvailable=_enableGen2ModelIfAvailable;
@property(nonatomic) _Bool enableCachingIfAvailable; // @synthesize enableCachingIfAvailable=_enableCachingIfAvailable;
@property(nonatomic) _Bool shouldUseTextReplacements; // @synthesize shouldUseTextReplacements=_shouldUseTextReplacements;
@property(copy, nonatomic) CHDrawing *drawing; // @synthesize drawing=_drawing;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(nonatomic) unsigned long long maxRecognitionResultCount; // @synthesize maxRecognitionResultCount=_maxRecognitionResultCount;
@property(nonatomic) int autoCorrectionMode; // @synthesize autoCorrectionMode=_autoCorrectionMode;
@property(nonatomic) int autoCapitalizationMode; // @synthesize autoCapitalizationMode=_autoCapitalizationMode;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(nonatomic) struct CGSize minimumDrawingSize; // @synthesize minimumDrawingSize=_minimumDrawingSize;
@property(nonatomic) int recognitionMode; // @synthesize recognitionMode=_recognitionMode;
@property(copy, nonatomic) NSDictionary *activeCharacterSetPerLocale; // @synthesize activeCharacterSetPerLocale=_activeCharacterSetPerLocale;
@property(copy, nonatomic) NSArray *locales; // @synthesize locales=_locales;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToRemoteRecognitionRequest:(id)arg1;
- (id)recognizerConfigurationKeyWithLocale:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithLocales:(id)arg1 recognitionMode:(int)arg2 drawing:(id)arg3 options:(id)arg4 priority:(long long)arg5;

@end

