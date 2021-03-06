//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBRunShortcutEvent : PBCodable <NSCopying>
{
    unsigned int _actionCount;
    NSString *_automationSuggestionsTrialIdentifier;
    NSString *_automationType;
    NSString *_galleryIdentifier;
    NSString *_key;
    unsigned int _numberOfDialogsPresented;
    NSString *_runSource;
    NSString *_shortcutSource;
    _Bool _completed;
    _Bool _didPresentShareSheet;
    _Bool _didRunRemotely;
    _Bool _isFromAutomationSuggestion;
    struct {
        unsigned int actionCount:1;
        unsigned int numberOfDialogsPresented:1;
        unsigned int completed:1;
        unsigned int didPresentShareSheet:1;
        unsigned int didRunRemotely:1;
        unsigned int isFromAutomationSuggestion:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *automationSuggestionsTrialIdentifier; // @synthesize automationSuggestionsTrialIdentifier=_automationSuggestionsTrialIdentifier;
@property(nonatomic) _Bool isFromAutomationSuggestion; // @synthesize isFromAutomationSuggestion=_isFromAutomationSuggestion;
@property(nonatomic) _Bool didPresentShareSheet; // @synthesize didPresentShareSheet=_didPresentShareSheet;
@property(nonatomic) unsigned int numberOfDialogsPresented; // @synthesize numberOfDialogsPresented=_numberOfDialogsPresented;
@property(retain, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(retain, nonatomic) NSString *shortcutSource; // @synthesize shortcutSource=_shortcutSource;
@property(nonatomic) _Bool didRunRemotely; // @synthesize didRunRemotely=_didRunRemotely;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property(retain, nonatomic) NSString *automationType; // @synthesize automationType=_automationType;
@property(retain, nonatomic) NSString *runSource; // @synthesize runSource=_runSource;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAutomationSuggestionsTrialIdentifier;
@property(nonatomic) _Bool hasIsFromAutomationSuggestion;
@property(nonatomic) _Bool hasDidPresentShareSheet;
@property(nonatomic) _Bool hasNumberOfDialogsPresented;
@property(readonly, nonatomic) _Bool hasGalleryIdentifier;
@property(readonly, nonatomic) _Bool hasShortcutSource;
@property(nonatomic) _Bool hasDidRunRemotely;
@property(nonatomic) _Bool hasCompleted;
@property(nonatomic) _Bool hasActionCount;
@property(readonly, nonatomic) _Bool hasAutomationType;
@property(readonly, nonatomic) _Bool hasRunSource;
@property(readonly, nonatomic) _Bool hasKey;

@end

