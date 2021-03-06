//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMDoubleLinkedList, NSCountedSet, NSMutableDictionary;

@interface CKCurrentConversationsManager : NSObject
{
    NSCountedSet *_currentConversations;
    NSMutableDictionary *_idToNodeDictionary;
    IMDoubleLinkedList *_orderedKeys;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) IMDoubleLinkedList *orderedKeys; // @synthesize orderedKeys=_orderedKeys;
@property(retain, nonatomic) NSMutableDictionary *idToNodeDictionary; // @synthesize idToNodeDictionary=_idToNodeDictionary;
@property(retain, nonatomic) NSCountedSet *currentConversations; // @synthesize currentConversations=_currentConversations;
@property(readonly, nonatomic) unsigned long long cacheSize;
- (void)_prepareToDumpCachedConversation:(id)arg1;
- (_Bool)_canDumpConversationFromCache:(id)arg1;
- (void)loadHistoryForConversation:(id)arg1 keepAllCurrentlyLoadedMessages:(_Bool)arg2;
- (void)pruneCacheToSize:(unsigned long long)arg1;
- (void)pruneCache;
- (void)purgeConversations:(id)arg1;
- (void)purgeConversation:(id)arg1;
- (void)removeConversation:(id)arg1;
- (void)addConversation:(id)arg1;

@end

