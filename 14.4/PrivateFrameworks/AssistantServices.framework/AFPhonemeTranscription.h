//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFTranscriptionType-Protocol.h>

@class NSArray, NSString;

@interface AFPhonemeTranscription : NSObject <AFTranscriptionType>
{
    NSString *_orthography;
    NSString *_language;
    NSArray *_phonemeSuggestions;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *phonemeSuggestions; // @synthesize phonemeSuggestions=_phonemeSuggestions;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *orthography; // @synthesize orthography=_orthography;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

