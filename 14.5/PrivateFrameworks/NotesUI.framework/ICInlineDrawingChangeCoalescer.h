//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICAttachment, ICSelectorDelayer, NSManagedObjectContext, PKDrawing;

@interface ICInlineDrawingChangeCoalescer : NSObject
{
    ICAttachment *_attachment;
    ICSelectorDelayer *_processChangesSelectorDelayer;
    PKDrawing *_latestDrawing;
    unsigned long long _numberOfChanges;
    NSManagedObjectContext *_workerContext;
}

+ (void)purgeHandwritingSummariesInContext:(id)arg1;
+ (void)generateMissingOrOutdatedHandwritingSummariesInContext:(id)arg1;
+ (id)missingOrOutdatedHandwritingSummaryAttachmentIDsInContext:(id)arg1;
+ (id)handwritingSummaryAttachmentsInContext:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *workerContext; // @synthesize workerContext=_workerContext;
@property(nonatomic) unsigned long long numberOfChanges; // @synthesize numberOfChanges=_numberOfChanges;
@property(retain, nonatomic) PKDrawing *latestDrawing; // @synthesize latestDrawing=_latestDrawing;
@property(retain, nonatomic) ICSelectorDelayer *processChangesSelectorDelayer; // @synthesize processChangesSelectorDelayer=_processChangesSelectorDelayer;
@property(retain, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void)updateVersionIfNeededForAttachment:(id)arg1 withDrawing:(id)arg2;
- (void)processIndexableContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)mergeDrawingWithDrawing:(id)arg1;
- (id)retrieveAndClearLatestDrawingToMerge;
- (void)mergeDrawingChanges;
- (void)updateNowIfNecessary;
- (void)drawingDataDidChange:(id)arg1;
- (_Bool)hasChanges;
- (void)dealloc;
- (id)initWithAttachment:(id)arg1;

@end

