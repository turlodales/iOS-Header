//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol QLPreviewItem;

@interface QLEditedItem : NSObject
{
    id <QLPreviewItem> _item;
    NSURL *_editedFileURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *editedFileURL; // @synthesize editedFileURL=_editedFileURL;
@property(copy, nonatomic) id <QLPreviewItem> item; // @synthesize item=_item;
- (id)initWithItem:(id)arg1 editedFileURL:(id)arg2;

@end

