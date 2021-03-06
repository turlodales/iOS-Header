//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmojiFoundation/EMFIndexStrategy-Protocol.h>

@class NSDictionary, NSString;

@interface EMFAbstractIndexStrategy : NSObject <EMFIndexStrategy>
{
    NSDictionary *_termIndex;
    NSDictionary *_documentIndex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *documentIndex; // @synthesize documentIndex=_documentIndex;
@property(retain, nonatomic) NSDictionary *termIndex; // @synthesize termIndex=_termIndex;
- (void)assertMethodNeedsConcreteImplementation:(SEL)arg1;
- (id)commonDocumentsForTerms:(id)arg1;
- (id)calculateDocumentWeightsForQueryTokenCounts:(id)arg1;
- (id)termWeightForTerm:(id)arg1 inDocument:(id)arg2;
- (id)termsForDocument:(id)arg1;
- (id)postingsForTerm:(id)arg1;
- (id)initWithTermIndex:(id)arg1 andDocumentIndex:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

