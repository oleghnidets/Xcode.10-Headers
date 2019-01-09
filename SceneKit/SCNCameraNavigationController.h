//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNCameraControllerDelegate.h"
#import "SCNEventHandler.h"

@class NSDictionary, NSString, SCNCameraController, SCNNode, SCNView;

@interface SCNCameraNavigationController : NSObject <SCNEventHandler, SCNCameraControllerDelegate>
{
    long long _browseMode;
    float _cameraOriginalFieldOfView;
    float _fieldOfViewZoomFactor;
    float _originalOrthoScale;
    float _orthographicZoomFactor;
    _Bool _enabled;
    _Bool _translationAllowed;
    _Bool _didEverFocusNode;
    _Bool _isSceneBoundingSphereComputed;
    _Bool _cameraTargetComputed;
    _Bool _pinchShouldMoveCamera;
    _Bool _shouldUpdateTarget;
    _Bool _shouldIgnoreMomentumEvents;
    _Bool _isOrbiting;
    _Bool _recordingPointOfViewEvents;
    _Bool _mouseDown;
    CDUnion_915c2b1f _sceneBoundingSphere;
    // Error parsing type: , name: _translationOrigin
    float _initialZoom;
    // Error parsing type: , name: _initialPointOfViewWorldPosition
    double _lastKeyInputTime;
    double _flyModeVelocity;
    double _panSensitivity;
    double _truckSensitivity;
    double _rotationSensitivity;
    struct CGPoint _initialInputLocation;
    struct CGPoint _lastInputLocation;
    struct CGPoint _accumulatedDrag;
    double _lastRotationAngle;
    struct os_unfair_lock_s _drawAtTimeLock;
    struct {
        _Bool stickyMoveEnabled;
        unsigned long long direction__pickedAxis;
        unsigned long long userStickyAxis;
    } _stickyAxis;
    struct {
        _Bool automaticLocationUpToDate;
        _Bool hasAutomatic;
    } _target;
    struct {
        struct CGPoint lastDragLocation;
        struct CGPoint velocity;
        double lastDragTime;
    } _inertia;
    struct {
        struct os_unfair_lock_s lock;
        NSDictionary *keyCodeConfiguration;
        struct set<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short>> keyDown;
        struct vector<unsigned short, std::__1::allocator<unsigned short>> forward;
        struct vector<unsigned short, std::__1::allocator<unsigned short>> backward;
        struct vector<unsigned short, std::__1::allocator<unsigned short>> left;
        struct vector<unsigned short, std::__1::allocator<unsigned short>> right;
    } _keyboard;
    struct {
        _Bool hasShift;
        _Bool hasOption;
    } _scrollWheelModifiers;
    BOOL _enableFreeCamera;
    BOOL _autoSwitchToFreeCamera;
    SCNCameraController *_cameraController;
    id <SCNCameraNavigationControllerDelegate> _delegate;
    SCNView *_view;
    SCNNode *_freeViewCameraNode;
}

@property(nonatomic) double rotationSensitivity; // @synthesize rotationSensitivity=_rotationSensitivity;
@property(nonatomic) double truckSensitivity; // @synthesize truckSensitivity=_truckSensitivity;
@property(nonatomic) double panSensitivity; // @synthesize panSensitivity=_panSensitivity;
@property(nonatomic) double flyModeVelocity; // @synthesize flyModeVelocity=_flyModeVelocity;
@property(nonatomic) BOOL autoSwitchToFreeCamera; // @synthesize autoSwitchToFreeCamera=_autoSwitchToFreeCamera;
@property(nonatomic) BOOL enableFreeCamera; // @synthesize enableFreeCamera=_enableFreeCamera;
@property(readonly, nonatomic) SCNNode *freeCamera; // @synthesize freeCamera=_freeViewCameraNode;
@property(nonatomic) SCNView *view; // @synthesize view=_view;
@property(nonatomic) id <SCNCameraNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)__didChangePointOfView;
- (void)__willChangePointOfView;
- (void)_translateToViewPoint:(struct CGPoint)arg1;
- (void)_computeTranslationOrigin3DFromPoint:(struct CGPoint)arg1;
- (_Bool)_pointOfViewUsesOrthographicProjection;
- (void)_setPointOfViewOrthographicScale:(float)arg1;
- (float)_pointOfViewOrthographicScale;
- (void)_computeStickyAxisIfNeeded:(struct CGPoint)arg1;
- (BOOL)_computeBoundingSphereOmittingFloorsForNode:(struct __C3DNode *)arg1 sphere:(struct C3DSphere *)arg2;
- (CDUnion_915c2b1f)_sceneBoundingSphere;
- (void)_computeAutomaticTargetPointIfNeeded;
- (struct SCNVector3)cameraAutomaticTargetPoint;
-     // Error parsing type: 24@0:8@16, name: _defaultTargetForScene:
- (void)_startBrowsingIfNeeded:(struct CGPoint)arg1;
-     // Error parsing type: 16@0:8, name: worldFront
- (double)_modeSensitivity;
- (BOOL)rotateWithEvent:(id)arg1;
- (BOOL)magnifyWithEvent:(id)arg1;
- (BOOL)scrollWheel:(id)arg1;
- (struct CGPoint)viewportMousePosition;
- (float)_scrollWheelMultiplier;
- (BOOL)mouseDragged:(id)arg1;
- (BOOL)mouseMoved:(id)arg1;
- (BOOL)mouseUp:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (BOOL)keyUp:(id)arg1;
- (BOOL)flagsChanged:(id)arg1;
- (BOOL)keyDown:(id)arg1;
- (BOOL)updateKeyboardStateAndRedrawIfNeeded:(id)arg1;
- (BOOL)isHandlingKeyboard;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)setKeyCodeConfiguration:(id)arg1;
- (void)_stopInertia;
- (void)cameraDidChange;
- (void)_willBeginInteraction;
- (void)_setupUpVector;
- (void)cameraWillChange;
- (void)viewDidDrawAtTime:(double)arg1;
- (void)viewWillDrawAtTime:(double)arg1;
- (void)sceneDidChange;
- (void)sceneWillChange;
- (void)cameraInertiaDidEndForController:(id)arg1;
- (void)cameraInertiaWillStartForController:(id)arg1;
- (void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)setZoomFactor:(double)arg1;
- (float)_orthographicScaleForZoomFactor:(float)arg1;
- (float)_orthographicZoomFactorForProposedZoomFactor:(float)arg1;
- (id)pointOfView;
- (double)zoomFactor;
- (void)zoomBy:(float)arg1;
- (void)zoomBy:(float)arg1 animate:(BOOL)arg2;
- (void)rotateOf:(double)arg1;
- (float)_targetDistance;
- (float)_translationCoef;
- (float)_cappedTranslationDelta:(float)arg1;
- (void)_switchToFreeViewCamera;
- (void)_installFreeViewCameraIfNeeded;
- (void)_prepareFreeViewCamera;
- (BOOL)_freeCameraActivated;
- (void)_resetFreeViewCamera;
- (void)activateFreeCamera;
- (unsigned long long)_effectiveStickyAxis;
@property(nonatomic) unsigned long long stickyAxis;
- (void)focusNodes:(id)arg1;
- (void)focusNode:(id)arg1;
- (BOOL)wantsRedraw;
- (void)setGimbalLockVector:(struct SCNVector3)arg1;
- (struct SCNVector3)gimbalLockVector;
@property(nonatomic) BOOL gimbalLockMode;
@property(nonatomic) struct SCNVector3 cameraTarget;
- (void)invalidateCameraTarget;
@property(nonatomic) BOOL automaticCameraTarget;
@property(nonatomic) double friction;
@property(nonatomic) BOOL enableInertia;
@property(nonatomic) BOOL allowsTranslation;
@property(nonatomic) BOOL enabled;
@property(readonly, nonatomic) SCNCameraController *cameraController; // @synthesize cameraController=_cameraController;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

