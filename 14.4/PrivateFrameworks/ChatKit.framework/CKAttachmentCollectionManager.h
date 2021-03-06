//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMChat, NSArray, NSSet;
@protocol CKAttachmentCollectionManagerDelegate;

__attribute__((visibility("hidden")))
@interface CKAttachmentCollectionManager : NSObject
{
    id <CKAttachmentCollectionManagerDelegate> _delegate;
    NSArray *_photosVideosItems;
    NSArray *_webLinksItems;
    NSArray *_otherContentsItems;
    IMChat *_chat;
    NSSet *_photoTransferGUIDs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *photoTransferGUIDs; // @synthesize photoTransferGUIDs=_photoTransferGUIDs;
@property(retain, nonatomic) IMChat *chat; // @synthesize chat=_chat;
@property(retain, nonatomic) NSArray *otherContentsItems; // @synthesize otherContentsItems=_otherContentsItems;
@property(retain, nonatomic) NSArray *webLinksItems; // @synthesize webLinksItems=_webLinksItems;
@property(retain, nonatomic) NSArray *photosVideosItems; // @synthesize photosVideosItems=_photosVideosItems;
@property(nonatomic) __weak id <CKAttachmentCollectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteAttachmentItems:(id)arg1;
- (void)updateCollections;
- (id)guidFromChatItem:(id)arg1;
- (void)chatItemsChanged:(id)arg1;
- (void)dealloc;
- (id)initWithChat:(id)arg1;
- (id)initWithChat:(id)arg1 photoTransferGUIDs:(id)arg2;

@end

