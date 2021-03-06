//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXEmbedService-Protocol.h>

@class NSString, NSURLSession;
@protocol SXEmbedDataProvider;

@interface SXEmbedService : NSObject <SXEmbedService>
{
    id <SXEmbedDataProvider> _embedDataProvider;
    NSURLSession *_session;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) id <SXEmbedDataProvider> embedDataProvider; // @synthesize embedDataProvider=_embedDataProvider;
- (id)addAdditionalQueryParameters:(id)arg1 toURL:(id)arg2;
- (id)additionalQueryParametersForConfiguration:(id)arg1;
- (void)fetchHTMLFromOEmbedURL:(id)arg1 embedType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)embedConfigurationForType:(id)arg1;
- (void)dealloc;
- (id)initWithDataProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

