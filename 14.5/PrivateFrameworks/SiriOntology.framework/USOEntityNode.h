//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriOntology/USOGraphNode.h>

@interface USOEntityNode : USOGraphNode
{
    struct UsoEntityNode *_usoEntityNode;
}

- (void)addUtteranceAlignmentWithAsrIndex:(unsigned int)arg1 StartIndex:(unsigned int)arg2 endIndex:(unsigned int)arg3 startUnicodeScalarIndex:(unsigned int)arg4 endUnicodeScalarIndex:(unsigned int)arg5;
- (void)addIdentifierWithValue:(id)arg1 appBundleId:(id)arg2 namespaceString:(id)arg3;
- (id)initWithCppEntityNode:(struct UsoEntityNode *)arg1;

@end

