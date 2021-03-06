//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NSArray, NSString;
@protocol FCContentContext;

@interface FCDraftIssuesFetchOperation : FCOperation
{
    CDUnknownBlockType _fetchCompletionHandler;
    id <FCContentContext> _context;
    NSString *_issueListID;
    NSArray *_resultIssues;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *resultIssues; // @synthesize resultIssues=_resultIssues;
@property(retain, nonatomic) NSString *issueListID; // @synthesize issueListID=_issueListID;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)initWithContext:(id)arg1 issueListID:(id)arg2;
- (id)init;

@end

