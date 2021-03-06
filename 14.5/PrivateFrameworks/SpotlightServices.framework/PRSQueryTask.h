//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, PRSSearchFeedback, PRSSearchSession, SPSearchQueryContext;
@protocol OS_dispatch_queue, PRSSearchQueryHandler;

@interface PRSQueryTask : NSObject <NSSecureCoding>
{
    _Bool _started;
    _Bool _canceled;
    _Bool _webSearch;
    long long _queryId;
    NSDictionary *_category_stats;
    NSDictionary *_server_features;
    NSArray *_parsecCategoryOrder;
    id _representedObject;
    SPSearchQueryContext *_queryContext;
    NSString *_queryString;
    unsigned long long _queryIdent;
    PRSSearchFeedback *_feedback;
    id <PRSSearchQueryHandler> _handler;
    NSObject<OS_dispatch_queue> *_queue;
    PRSSearchSession *_session;
    NSString *_fbq;
}

+ (_Bool)supportsSecureCoding;
+ (void)resumeDecoding;
+ (void)suspendDecoding;
+ (void)initialize;
- (void).cxx_destruct;
@property _Bool webSearch; // @synthesize webSearch=_webSearch;
@property(retain, nonatomic) NSString *fbq; // @synthesize fbq=_fbq;
@property(nonatomic) __weak PRSSearchSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <PRSSearchQueryHandler> handler; // @synthesize handler=_handler;
@property(retain) PRSSearchFeedback *feedback; // @synthesize feedback=_feedback;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property unsigned long long queryIdent; // @synthesize queryIdent=_queryIdent;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(readonly, nonatomic) SPSearchQueryContext *queryContext; // @synthesize queryContext=_queryContext;
@property(nonatomic) __weak id representedObject; // @synthesize representedObject=_representedObject;
@property(retain, nonatomic) NSArray *parsecCategoryOrder; // @synthesize parsecCategoryOrder=_parsecCategoryOrder;
@property(retain, nonatomic) NSDictionary *server_features; // @synthesize server_features=_server_features;
@property(retain, nonatomic) NSDictionary *category_stats; // @synthesize category_stats=_category_stats;
@property long long queryId; // @synthesize queryId=_queryId;
- (void)setParsecState:(_Bool)arg1;
- (id)feedbackQueryIdentifier;
- (void)invalidateHandler;
- (void)cancel;
- (void)resume;
- (id)initWithSession:(id)arg1 handler:(id)arg2 queue:(id)arg3 feedback:(id)arg4 queryContext:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

