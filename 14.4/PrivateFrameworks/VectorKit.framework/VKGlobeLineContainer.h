//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol VKGlobeLineContainerDelegate, VKRouteMatchedAnnotationPresentation;

__attribute__((visibility("hidden")))
@interface VKGlobeLineContainer : NSObject
{
    id <VKRouteMatchedAnnotationPresentation> _routeLineSplitAnnotation;
    id <VKGlobeLineContainerDelegate> _delegate;
    set_f5697f57 _overlays;
    set_f5697f57 _persistentOverlays;
    set_f5697f57 _nonPersistentOverlays;
    struct RouteRenderLayer *_routeRenderLayer;
    struct map<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::weak_ptr<altitude::RouteLineData>, std::__1::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::allocator<std::__1::pair<const geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::weak_ptr<altitude::RouteLineData>>>> _polylinesToRoutes;
    _retain_ptr_7ea4e41c _selectedPolyline;
    struct VKGlobeRouteSplit *_routeSplit;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) id <VKGlobeLineContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (float)halfWidthForLine:(id)arg1 styleZ:(float)arg2;
- (void)update;
- (void)_destroyLinesIfNeeded;
- (void)_recreateLinesIfNeeded;
- (void)_updateRouteSplit;
@property(retain, nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
- (void)setSelected:(_retain_ptr_7ea4e41c)arg1 selected:(_Bool)arg2;
- (void)clearLineSelection;
- (void)removeLine:(_retain_ptr_7ea4e41c)arg1;
- (void)addLine:(_retain_ptr_7ea4e41c)arg1;
- (const set_f5697f57 *)nonPersistentOverlays;
- (const set_f5697f57 *)persistentOverlays;
- (const set_f5697f57 *)overlays;
- (void)removeNonPersistentOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (_Bool)hasPersistentOverlay:(id *)arg1;
- (_Bool)hasNonPersistentOverlay:(id *)arg1;
- (void)_removeOverlay:(id)arg1;
- (void)addNonPersistentOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)_addOverlay:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithRouteRenderLayer:(struct RouteRenderLayer *)arg1;

@end

