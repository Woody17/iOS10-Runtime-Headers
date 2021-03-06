/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRootWindow : UIWindow {
    bool  _isExternal;
    bool  _mainDisplay;
}

- (void)_configureContextOptions:(id)arg1;
- (void)_configureRootLayer:(id)arg1 transformLayer:(id)arg2;
- (id)_context;
- (bool)_isConstrainedByScreenJail;
- (bool)_isWindowServerHostingManaged;
- (void)_noteScreenDidChangeMode:(id)arg1;
- (bool)_touchesInsideShouldHideCalloutBar;
- (bool)_transformLayerIncludesScreenRotation;
- (bool)_wantsSceneAssociation;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (void)setScreen:(id)arg1;

@end
