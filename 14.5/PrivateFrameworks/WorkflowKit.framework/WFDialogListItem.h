//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSData, NSString, WFContentItem, WFImage;
@protocol WFPropertyListObject;

@interface WFDialogListItem : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _selected;
    _Bool _hideSubtitle;
    NSString *_title;
    NSString *_identifier;
    id <WFPropertyListObject> _serializedPossibleState;
    NSString *_subtitle;
    WFImage *_image;
    WFContentItem *_contentItem;
    NSData *_archivedContentItem;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *archivedContentItem; // @synthesize archivedContentItem=_archivedContentItem;
@property(retain, nonatomic) WFContentItem *contentItem; // @synthesize contentItem=_contentItem;
@property(nonatomic) _Bool hideSubtitle; // @synthesize hideSubtitle=_hideSubtitle;
@property(retain, nonatomic) WFImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) id <WFPropertyListObject> serializedPossibleState; // @synthesize serializedPossibleState=_serializedPossibleState;
@property(readonly, nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadImageWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)loadAltTextWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)loadSubtitleWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadContentItemWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool showingStaticContent;
@property(readonly, nonatomic) _Bool hasImage;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 selected:(_Bool)arg4 contentItem:(id)arg5 hideSubtitle:(_Bool)arg6 serializedPossibleState:(id)arg7;
- (id)initWithContentItem:(id)arg1 selected:(_Bool)arg2 hideSubtitle:(_Bool)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 selected:(_Bool)arg4 serializedPossibleState:(id)arg5;

@end

