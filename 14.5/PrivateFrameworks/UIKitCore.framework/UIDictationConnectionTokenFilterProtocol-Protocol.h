//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, UIDictationConnection, UIDictationToken;

@protocol UIDictationConnectionTokenFilterProtocol <NSObject>
- (void)dictationConnection:(UIDictationConnection *)arg1 didFilterTokensWithFilterState:(id)arg2 forFinalize:(_Bool)arg3;
- (void)dictationConnection:(UIDictationConnection *)arg1 filterState:(id)arg2 processFilteredToken:(UIDictationToken *)arg3 forFinalize:(_Bool)arg4;
- (_Bool)dictationConnection:(UIDictationConnection *)arg1 filterState:(id)arg2 shouldCheckpointAtToken:(UIDictationToken *)arg3;
- (id)dictationConnection:(UIDictationConnection *)arg1 willFilterTokensWithLanguageModel:(NSString *)arg2 forFinalize:(_Bool)arg3;
- (struct __CFString *)resultTransformForLanguageModel:(NSString *)arg1;
@end

