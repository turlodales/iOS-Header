//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <VoiceMemos/RCMutableRecording-Protocol.h>

@class AVAsset, CLLocation, CSSearchableItem, NSDate, NSString, NSURL;
@protocol RCFolder;

@interface RCSavedRecording : NSManagedObject <RCMutableRecording>
{
    AVAsset *_avAsset;
    _Bool _pathWasInvalid;
    _Bool _ignoreChangeForEntityRevision;
    _Bool _hasPendingChangeAffectingEntityRevision;
    long long revisionID;
}

+ (id)localizedStringForRecordingLabel:(long long)arg1;
+ (id)propertiesAffectingEntityRevision;
+ (id)searchableItemIdentifierForSavedRecordingURI:(id)arg1;
+ (id)savedRecordingURIForSearchableItemIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long revisionID; // @synthesize revisionID;
@property(readonly, nonatomic) _Bool hasPendingChangeAffectingEntityRevision; // @synthesize hasPendingChangeAffectingEntityRevision=_hasPendingChangeAffectingEntityRevision;
- (id)subjectForActivityType:(id)arg1;
- (id)itemForActivityType:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)_validatePath;
@property(readonly, nonatomic) AVAsset *avAsset;
@property(readonly, nonatomic) _Bool uploaded;
@property(nonatomic) _Bool deleted;
@property(nonatomic) _Bool enhanced;
@property(nonatomic) _Bool favorite;
@property(nonatomic) _Bool musicMemo;
@property(nonatomic) _Bool watchOS;
@property(nonatomic) _Bool recordedOnWatch;
@property(nonatomic) _Bool downloading;
@property(nonatomic) _Bool manuallyRenamed;
@property(nonatomic) _Bool playable;
@property(copy, nonatomic) NSDate *evictionDate;
- (id)detailLabel;
- (id)_labelAllowingEmptyString:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSURL *URIRepresentation;
@property(readonly, copy, nonatomic) NSURL *url;
@property(copy, nonatomic) NSString *path; // @dynamic path;
@property(nonatomic) long long recordingID;
@property(nonatomic) long long iTunesPersistentID;
@property(copy, nonatomic) NSString *customLabel;
@property(readonly, copy, nonatomic) NSString *titleDisallowingEmptyString;
- (id)label;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *name;
- (void)setLabelPreset:(long long)arg1;
- (long long)labelPreset;
@property(copy, nonatomic) CLLocation *location;
- (void)setDuration:(double)arg1;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) _Bool isContentBeingModified;
- (void)willSave;
- (void)willChangeValueForKey:(id)arg1;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
@property(readonly, copy, nonatomic) CSSearchableItem *searchableItem;

// Remaining properties
@property(readonly, copy, nonatomic) NSDate *date; // @dynamic date;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <RCFolder> folder;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool pendingRestore; // @dynamic pendingRestore;
@property(readonly) Class superclass;
@property(nonatomic) _Bool synced; // @dynamic synced;
@property(copy, nonatomic) NSString *uniqueID; // @dynamic uniqueID;

@end

