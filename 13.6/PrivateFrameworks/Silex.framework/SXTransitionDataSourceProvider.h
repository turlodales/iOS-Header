//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXTransitionDataSourceProvider-Protocol.h>

@class NSString, SXTransitionDataSourceNode, UIScrollView;
@protocol SXComponentController, SXDocumentMetadataProviding;

@interface SXTransitionDataSourceProvider : NSObject <SXTransitionDataSourceProvider>
{
    id <SXComponentController> _componentController;
    UIScrollView *_scrollView;
    id <SXDocumentMetadataProviding> _documentMetadataProvider;
    SXTransitionDataSourceNode *_currentNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SXTransitionDataSourceNode *currentNode; // @synthesize currentNode=_currentNode;
@property(readonly, nonatomic) id <SXDocumentMetadataProviding> documentMetadataProvider; // @synthesize documentMetadataProvider=_documentMetadataProvider;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) id <SXComponentController> componentController; // @synthesize componentController=_componentController;
- (id)transitionDataSourceForType:(unsigned long long)arg1;
- (id)initWithComponentController:(id)arg1 scrollView:(id)arg2 documentMetadataProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

